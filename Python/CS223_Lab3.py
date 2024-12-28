from itertools import permutations

Numbers = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
Set = permutations(Numbers, 4)
Pin = list(Set)

while True:
    input1 = input("Enter a PinCode: ")
    
    if input1.isdigit() and len(input1) == 4:
        Password = tuple(map(int, input1))
        
        if Password in Pin:
            print("OPEN")
            break
        else:
            print("Incorrect")
    else:
        print("Retry")

######################################################################

import itertools
import random

LuckyNumbers = list(itertools.combinations(range(1, 46), 6))

TayaINi = random.choice(LuckyNumbers)
print("Lucky Numbers:", TayaINi)
print("Taya-I NI!!!")