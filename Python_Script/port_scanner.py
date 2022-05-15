#!/bin/python3

import sys
import socket
from datetime import datetime



if len(sys.argv) == 2:
	target = socket.gethostbyname(sys.argv[1])
else:
	print("uh no! INVALID AMOUNT OF ARGUMENTS")
	print("SYNATX IS LIKE THIS :- python3 port_scanner.py <ip>")
	sys.exit()



print("*"*70)
print("*"+" "*24+"ANKEY'S PORT SCANNER"+" "*24+"*")
print("*"*70)
print("*"+"  1. Follow me on GITHUB : www.github.com/yoitsankey"+" "*16+"*")
print("*"+"  2. Follow me on INSTAGRAM : www.instagram.com/yoitsankey"+" "*10+"*")
print("*"*70)
print("*"+" > Scanning Target 	      : {} ".format(str(target))+" "*26+"*")
print("*"+" > This Scan Started at Time  : {} ".format(str(datetime.now()))+" "*9+"*")
print("*"*70)
print("*"+" : Enter the Port Range Below For Which You Wanna Do The Scan For : "+"*")
print("*"*70)


file = open("result.txt","w+")

port1 = input("\n > Enter the Starting Port Number In the Range Here     :    ")
port2 = input("\n > Enter the Last Port Number In the Range Here   	:    ")



try:
	for port in range(int(port1),int(port2)+1):
		link=socket.socket(socket.AF_INET, socket.SOCK_STREAM)
		socket.setdefaulttimeout(1)
		result=link.connect_ex((target,port))
		print("\n Currently Checking Port Number :  {}".format(str(port)))
		if result == 0:
			print(" Port Number {} is Open".format(port))
			file.write("\nPort Number {} is Open".format(port))	
		link.close()
	file = open("result.txt","r")
	print("*"*70)
	print("*"+" "*17+": Summary of this Scan is Below : "+" "*17+"*")
	print("*"*70)
	print(file.read())
	file.close()
	
except KeyboardInterrupt:
	print("\nDetected Keyboard Interrupt\nExiting Program\nBYE BYE")
	sys.exit()
except socket.gaierror:
	print("Unable to resolve DNS")
	sys.exit()
except socket.error:
	print("Unable to connect to the host")
	sys.exit()
