#!/bin/python3

#Importing Necessary Modules

import sys										#Importing sys for taking arguments as an input from the  user
import socket										#As We know socket = Ip addr + port number, That's why this modules is the key part of our program
from datetime import datetime			

#Checking Valid Amount of Arguments

if len(sys.argv) == 2:									#Here this conditional statements just checks for valid amount of arguments that is 2
	target = socket.gethostbyname(sys.argv[1])					#Resolving Host by name and translate hostname to IPv4 and store it into a target variable.
else:
	print("uh no! INVALID AMOUNT OF ARGUMENTS")
	print("SYNATX IS LIKE THIS :- python3 port_scanner.py <ip>")
	sys.exit()

#Adding a BANNER

print("*"*70)
print("*"+" "*24+"ANKEY'S PORT SCANNER"+" "*24+"*")
print("*"*70)
print("*"+"  1. Follow me on GITHUB      : www.github.com/yoitsankey"+" "*11+"*")
print("*"+"  2. Follow me on INSTAGRAM   : www.instagram.com/yoitsankey"+" "*8+"*")
print("*"*70)
print("*"+" > Scanning Target 	       : {} ".format(str(target))+" "*25+"*")
print("*"+" > This Scan Started at Time  : {} ".format(str(datetime.now()))+" "*9+"*")
print("*"*70)
print("*"+" : Enter the Port Range Below For Which You Wanna Do The Scan For : "+"*")
print("*"*70)

#Creation of a file called result.txt that will store the results of this scan once a scan is done.

file = open("result.txt","w+")

#Creating Variables that will take input from the user for the port number range

port1 = input("\n > Enter the Starting Port Number In the Range Here     :    ")
port2 = input("\n > Enter the Last Port Number In the Range Here   	:    ")

#Main Part of our code starts from here

try:
	for port in range(int(port1),int(port2)+1):					#Starting a for loop for checking out the iteration of port range as inputted by the user.	
		link=socket.socket(socket.AF_INET, socket.SOCK_STREAM)			#Creating a socket (remember socket = ip addr + port number) and storing it into a variable called link.
		socket.setdefaulttimeout(1)						#If a connection is unreachable then its gonna wait for 1 second and then move on
		result=link.connect_ex((target,port))					#If a port is closed then it returns an error indicator with 1 and stores it in a variable called result
		print("\n Currently Checking Port Number :  {}".format(str(port)))	
		if result == 0:								#If a port is open then it stores 0 in the result variable.
			print(" Port Number {} is Open".format(port))
			file.write("\nPort Number {} is Open".format(port))		#In Each iteration Each open port number is written to a file known as result.txt
		link.close()								#Closing the connection for each iterate
	file = open("result.txt","r")							#Opening the result.txt file for the generating the summary of this scan
	print("*"*70)
	print("*"+" "*17+": Summary of this Scan is Below : "+" "*17+"*")
	print("*"*70)
	print(file.read())								#Printing the Contents of result.txt file
	print("\n"+"-"*26+ "> Scan Complete <"+"-"*27)
	print("\n > All the Results are Stored in a file known as Result.txt\n > It is stored in the same directory as of this Program\n > Kindly check it out for reference")
	print("\n > Thank You For Using the Program\n > Exiting Program\n > BYE BYE")

#Closing the file result.txt

	file.close()
	
except KeyboardInterrupt:
	print("\n > Detected Keyboard Interrupt\n > Exiting Program\n > BYE BYE")
	sys.exit()
except socket.gaierror:
	print("\n > Unable to resolve Hostname\n > Exiting Program\n > BYE BYE")
	sys.exit()
except socket.error:
	print("\n> Unable to Connect to the SERVER\n > Exiting Program\n > BYE BYE")
	sys.exit()
	
