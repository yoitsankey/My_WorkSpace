#!/bin/python3

import sys
import socket
from datetime import datetime

if len(sys.argv) == 2:
	target = socket.gethostbyname(sys.argv[1])
else:
	print("uh no! INVALID SYNTAX")
	print("SYNATX IS LIKE THIS :- python3 port_scanner.py <ip>")

port1 = input("Enter the Starting Port Here : ")
port2 = input("Enter the Ending Port Here : ")

file = open("result.txt","w+")

try: 
	for port in range(int(port1),int(port2)+1):
		link=socket.socket(socket.AF_INET, socket.SOCK_STREAM)
		socket.setdefaulttimeout(1)
		result=link.connect_ex((target,port))
		if result == 0:
			print("\nPort Number {} is Open".format(port))
			file.write("\nPort Number {}".format(port))	
		link.close()
	file = open("result.txt","r")
	print(file.read())
	file.close()
	
except KeyboardInterrupt:
	print("\nDetected Keyboard Interrupt\nExiting Program\nBYE BYE")
	link.close()
except socket.gaierror:
	print("Unable to resolve DNS")
	link.close()
except socket.error:
	print("Unable to connect to the host")
	link.close()
		
		
