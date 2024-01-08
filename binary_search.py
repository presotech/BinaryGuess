from random import randint

win = False
limit = 10
secret = randint(1, 100)

for i in range(1, limit + 1):
    guess = int(input("Guess: "))

    if guess > secret:
        print("Too high!")
    elif guess < secret:
        print("Too low!")
    else:
        win = True
        print("You win! Guesses used: {}".format(i))
        break

if not win:
    print("You lose!")

