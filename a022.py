import sys

for string in sys.stdin:
	string = string.strip()
	if string[::-1] ==string:
		print("yes")
	else: 
		print("no")