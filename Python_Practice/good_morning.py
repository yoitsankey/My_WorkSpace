import time

timestamp=time.strftime('%H:%M:%S')
print(timestamp)

hours = int(time.strftime('%H'))

if hours>=0 and hours<12:
    print("Good Morning Sir")
elif hours>=12 and hours<15:
    print("Good Afternoon Sir")
elif hours>=15 and hours<20:
    print("Good Evening Sir")
elif hours>=20 and hours<=24:
    print("Good Night Sir")