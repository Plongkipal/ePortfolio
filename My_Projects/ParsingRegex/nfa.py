class State:
    def __init__(self, is_end=False):
        self.is_end = is_end
        self.transition = {}
        self.epsilon_transitions = []

def add_epsilon_transition(from_state, to_state):
    from_state.epsilon_transitions.append(to_state)

def add_transition(from_state, to_state, symbol):
    from_state.transition[symbol] = to_state

def from_epsilon():
    start = State(False)
    end = State(True)
    add_epsilon_transition(start, end)
    return {'start': start, 'end': end}

def from_symbol(symbol):
    start = State(False)
    end = State(True)
    add_transition(start, end, symbol)
    return {'start': start, 'end': end}

def concat(first, second):
    add_epsilon_transition(first['end'], second['start'])
    first['end'].is_end = False
    return {'start': first['start'], 'end': second['end']}

def union(first, second):
    start = State(False)
    add_epsilon_transition(start, first['start'])
    add_epsilon_transition(start, second['start'])
    end = State(True)
    add_epsilon_transition(first['end'], end)
    first['end'].is_end = False
    add_epsilon_transition(second['end'], end)
    second['end'].is_end = False
    return {'start': start, 'end': end}

def closure(nfa):
    start = State(False)
    end = State(True)
    add_epsilon_transition(start, end)  # Allows for zero occurrences
    add_epsilon_transition(start, nfa['start'])  # Loop back to the start of the NFA
    add_epsilon_transition(nfa['end'], end)  # Move to the end state after matching
    add_epsilon_transition(nfa['end'], nfa['start'])  # Loop to allow repetition
    nfa['end'].is_end = False  # Ensure the last state isn't an end state initially
    return {'start': start, 'end': end}

def zero_or_one(nfa):
    start = State(False)
    end = State(True)
    add_epsilon_transition(start, end)
    add_epsilon_transition(start, nfa['start'])
    add_epsilon_transition(nfa['end'], end)
    nfa['end'].is_end = False
    return {'start': start, 'end': end}

def one_or_more(nfa):
    start = State(False)
    end = State(True)
    add_epsilon_transition(start, nfa['start'])
    add_epsilon_transition(nfa['end'], end)
    add_epsilon_transition(nfa['end'], nfa['start'])
    nfa['end'].is_end = False
    return {'start': start, 'end': end}

def to_nfa(postfix_exp):
    if postfix_exp == '':
        return from_epsilon()
    
    stack = []

    for token in postfix_exp:
        if token == '*':
            stack.append(closure(stack.pop()))
        elif token == '?':
            stack.append(zero_or_one(stack.pop()))
        elif token == '+':
            stack.append(one_or_more(stack.pop()))
        elif token == '|':
            right = stack.pop()
            left = stack.pop()
            stack.append(union(left, right))
        elif token == '.':
            right = stack.pop()
            left = stack.pop()
            stack.append(concat(left, right))
        else:
            stack.append(from_symbol(token))
    
    return stack.pop()

def add_next_state(state, next_states, visited):
    if state.epsilon_transitions:
        for st in state.epsilon_transitions:
            if st not in visited:
                visited.append(st)
                add_next_state(st, next_states, visited)
    else:
        next_states.append(state)

def search(nfa, word):
    current_states = []
    add_next_state(nfa['start'], current_states, [])

    for symbol in word:
        next_states = []
        for state in current_states:
            next_state = state.transition.get(symbol)
            if next_state:
                add_next_state(next_state, next_states, [])
        current_states = next_states

    return any(s.is_end for s in current_states)

def recognize(nfa, word):
    return search(nfa, word)
