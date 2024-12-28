import random

choices = ['rock', 'paper', 'scissors']

def determine_winner (player, computer):
  if player == computer:
      return "its a tie!"
  elif (player == "rock" and computer == "scissors") or \
       (player == 'scissors' and computer == "paper") or \
       (player == "paper" and computer == "rock"):
      return "player wins!"
  else:
      return "computer wins! you lose."

while True:
    player_choice = input ("Enter rock, paper, scissors or quit:").lower()
    
    if player_choice == "quit":
        print ("Thanks for playing!")
        break

    if player_choice not in choices:
       print("invalid")
       continue

    computer_choice = random.choice(choices)
    print(f"computer chose {computer_choice}")

    result = determine_winner(player_choice, computer_choice)
    print(result)
