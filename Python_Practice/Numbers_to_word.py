num_to_word = {
     "0" : "zero",
     "1" : "one",
     "2" : "two",
     "3" : "three",
     "4" : "four",
     "5" : "five",
     "6" : "six",
     "7" : "seven",
     "8" : "eight",
     "9" : "nine"
}
user_input = input("Phone : ")
word = ""
for each_char in user_input:
    word += num_to_word.get(each_char) + " "
print(word)