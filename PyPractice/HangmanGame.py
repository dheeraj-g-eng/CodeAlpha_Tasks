import random

# a) Small list of 5 predefined words
words = ["apple", "table", "chair", "bread", "mouse"]

# Pick a random word from the list
word = random.choice(words)

# Variables to track game state
guessed_letters = []
incorrect_guesses = 0
max_attempts = 6  # b) Limit incorrect guesses to 6

print("🎯 Welcome to Hangman!")

# c) Basic console input/output
while incorrect_guesses < max_attempts:
    # Show current progress
    display_word = ""
    for letter in word:
        if letter in guessed_letters:
            display_word += letter
        else:
            display_word += "_"
    print("\nWord:", display_word)

    # Check win condition
    if "_" not in display_word:
        print("🎉 You guessed the word:", word)
        break

    # Ask for player's guess
    guess = input("Guess a letter: ").lower()

    # Validate input
    if len(guess) != 1 or not guess.isalpha():
        print("⚠️ Please enter a single letter.")
        continue

    if guess in guessed_letters:
        print("⚠️ You already guessed that letter.")
        continue

    # Add guess to list
    guessed_letters.append(guess)

    # Check if guess is correct
    if guess in word:
        print("✅ Good guess!")
    else:
        incorrect_guesses += 1
        print(f"❌ Wrong guess! {max_attempts - incorrect_guesses} attempts left.")

# Lose condition
if incorrect_guesses == max_attempts:
    print("\n💀 Game Over! The word was:", word)
