#!/bin/bash
if [ "$1" == "" ]
then
echo "Please Enter an Network Address"
echo "Correct Syntax is: ./ipextracter.sh 192.168.0"

else
for range in `seq 1 254`; do
ping -c 1 $1.$range| grep "64 bytes" | cut -d " " -f 4 | tr -d ":" &
done
fi
