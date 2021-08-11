import random
import pyautogui
import time 




chars = "0123456789"
chars_list = list(chars)

password = pyautogui.password("Enter a password : ")

guess_password = ""

start_time = time.time()
while(guess_password != password):
	guess_password = random.choices(chars_list, k=len(password))

	print("<=================" + str(guess_password) + "=================>")

	if (guess_password == list(password)):
		print("Your password is : " + "".join(guess_password))
		break

print("--- %s seconds ---" % (time.time() - start_time))
