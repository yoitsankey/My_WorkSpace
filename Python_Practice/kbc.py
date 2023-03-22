import string
questions = ["Entomology is the science that studies","Garampani sanctuary is located at","ICAO stands for","India has largest deposits of ____ in the world.","How many Lok Sabha seats belong to Rajasthan?"]
rest_options = [[["Humans"],["Birds"],["Reptiles"],["Insects"]],[["Bihar"],["MP"],["Kerela"],["Assam"]],[["None of these"],["All of these"],["International Civil Aviation Organization"],["internet calling assigned organisation"]],[["mica"],["oil"],["silver"],["gold"]],[["10"],["25"],["32"],["15"]]]
# correct_answers =["insects","Assam","International Civil Aviation Organization","mica","25"]
correct_answers_options = ["d","d","c","a","b"]
print("________________________________________________")
print("|                                              |")
print("|              Let's Play Sasta KBC            |")
print("|______________________________________________|\n")
user_name = input("Welcome Player, Please Enter Your Name : ")
print(f"Nice to have you here {user_name}")
print("Let's Start! Here is Question on your screen\n")
money_won = 0
for each_char in range(1,6):
    print(f"Q{each_char}.{questions[each_char-1].upper()}\n")
    for num in range(1,5):
        print(f"{string.ascii_uppercase[num-1]}.")
        for each_option in rest_options[each_char-1][num-1]:
            print(f"{each_option}\n")
    user_input = input("Lock Your choice: ")
    if user_input.lower() == correct_answers_options[each_char-1]:
        print("Woah! It's a Correct Answer")
        money_won+=10000000
        print(f"Money Prize Amount Won Till Now: ₹{money_won}\n")
        if each_char==5:
            print(f"Congratulations! You have reached the end of the game\nAnd the total amout you are taking away home is ₹{money_won}\n!!!!!THANK YOU FOR PLAYING!!!!!")
            break
    else:
        print("Uh no! Wrong Answer \n!!!!!!!!!!!GAME OVER!!!!!!!!!\n")
        print(f"Take Away Amount : ₹{money_won}")
        break