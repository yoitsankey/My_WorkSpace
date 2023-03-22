def fibonacci(n):
    if n==1:
        return 1
    elif n == 0:
        return 0
    else:
        return fibonacci(n-1)+fibonacci(n-2)



user_input = int(input(" "))
for numbers in range(1,user_input+1):
    print(fibonacci(numbers))