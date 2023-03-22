unit = input("Select the Unit? (L)bs or (K)g? ")
weight = input("Enter your weight ")
if unit == 'L' or unit == 'l':
    converted_weight = float(weight) * 0.453592
    print(f'You are {converted_weight} Kilograms')
elif unit == 'K' or unit == 'k':
    converted_weight = float(weight) * 2.20462
    print(f'You are {converted_weight} Pounds')
else:
    print("Invalid Input")