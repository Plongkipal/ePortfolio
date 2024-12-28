from regex import create_matcher

def main():
    # Prompt the user to input a pattern
    pattern = input("Enter a regular expression pattern: ")

    # Create the matcher for the given pattern
    matcher = create_matcher(pattern)

    print("Check words (type 'exit' to quit): ")

    while True:
        # Get a word from the user to test against the pattern
        word = input("Word to check: ")

        # If the user types 'exit', break out of the loop and quit the program
        if word.lower() == 'exit':
            print("Exiting the program...")
            break
        
        print(f"Match? {matcher(word)}")

if __name__ == "__main__":
    main()
