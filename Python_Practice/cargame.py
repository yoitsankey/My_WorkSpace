while True:
    user_input = input("What's Your Command Sir ").upper()
    if user_input == "HELP":
        print("Here is the menu: 1.Help 2.Start 3.Stop 4.Exit")
    elif user_input == "START":
        print("Car is started and ready to roll! ")
        user_input2 = input("What's Your Command Sir ").upper()
        if user_input2 == "START":
            print("Car is already started ")
        elif user_input2 == "STOP":
            print("Car is Stopped ")
    elif user_input == "STOP":
        print("Car is stopped ")
        user_input2 = input("What's Your Command Sir ").upper()
        if user_input2 == "STOP":
            print("Already stopped ")
        elif user_input2 == "START":
            print("Car is started and ready to roll! ")
    elif user_input == "EXIT":
        print("EXITING!")
        break
    else:
        print("Invalid Command!")