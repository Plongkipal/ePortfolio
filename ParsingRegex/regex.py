from parser import insert_explicit_concat_operator, to_postfix
from nfa import to_nfa, recognize

def create_matcher(exp):
    nfa = to_nfa(exp)  # Using the tree-based NFA construction
    return lambda word: recognize(nfa, word)
