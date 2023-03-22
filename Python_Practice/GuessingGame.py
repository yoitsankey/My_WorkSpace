secret_value = 10
chance=1
Max_chance=3
while chance<=Max_chance:
    user_input = int(input("Guess a Number : "))
    if user_input == secret_value:
        print("You are right! You Won!")
        break
    elif (3-chance)>=2:
        print(f'You lost a life, you have {3-chance} lives left! Try Again!')
    elif (3-chance)==1:
        print(f'You lost a life, you have 1 life left! Last chance or GAME OVER!')
    else:
        print("GAME OVER! YOU LOST!")
    chance=chance+1
