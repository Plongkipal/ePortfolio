import random
import hashlib

words = ["hello world", "sorting", "linked list", "inheritance", "query", "ms. faune", "algorithm", "data structures", "python", "normalization", "hashing"]

def hash_letter(letter):
    return hashlib.sha256(letter.encode()).hexdigest()

def hangman():
    word = random.choice(words)
    word_length = len(word)
    misses = 0
    guessed_letters = [hash_letter('*')] * word_length
    
    print("Welcome to CS Guess The Word!\n")
    print("There will be a limit of 8 guesses and 3 hints. GOODLUCK :>\n")
    print("Guess the hashed word -", ''.join(guessed_letters))

    hints_used = 0

    while True:
        print("\nEnter the word or type 'hint' for a hint: ", end="")
        guess = input()

        if guess.lower() == 'hint':
            hints_used += 1
            if hints_used == 1:
                print("Hint 1: The word starts with", word[0])
            elif hints_used == 2:
                print("Hint 2: The word has", word_length, "letters")
            elif hints_used == 3:
                print("Hint 3: The word is related to", words_description[word])
            else:
                print("No more hints available.")
            continue

        if guess == word:
            print(f"Congratulations! You guessed the word: {word} [YAAAYY!!]\nYou Missed: {misses}")
            break
        else:
            misses += 1
            print(f"    {guess} is not the correct word :<")
            print(f"You have {8 - misses} guesses left.")

        if ''.join(guessed_letters) == ''.join(map(hash_letter, word)):
            print(f"The word is: {word} [YAAAYY!!]\nYou Missed: {misses}")
            break
            
        elif misses == 8:
            print(f"ENGGGKKKK! wrong T~T. the word was: {word}\nYou Missed: {misses}")
            break

    return input("Do you want to guess for another word? Enter y or n. ").lower() == 'y'

# Adding descriptions for each word
words_description = {
    "hello world": "classic tradition first code written when learning a new programming language",
    "normalization": "the process of organizing data to reduce redundancy and improve data integrity",
    "linked list": "a data structure where elements are linked together sequentially",
    "ms.faune": "CS's DSA instructor",
    "algorithm": "a set of rules or steps for solving a particular problem",
    "data structures": "a particular way of storing and organizing data",
    "sorting": "a method for arranging elements in a specific order",
    "inheritance": "a mechanism for creating a new class that inherits properties and behaviors from an existing class",
    "hashing": "widely used for data retrieval, cryptography, and ensuring data integrity",
    "query": " a request for data or information from a database using a specific syntax",
    "python": "a high-level programming language"
}

if __name__ == "__main__":
    play_again = True
    while play_again:
        play_again = hangman()

    print("K bye. Thanks for playing. :>")
