import sys

a = sys.stdin.readline()
for string in sys.stdin:
	string = string.strip()
	counter = 0
	if len(string)==5:
		print(3)
	else:
		if string[0]=="o":
			counter+=1
		if string[1]=="n":
			counter+=1
		if string[2]=="e":
			counter+=1	
		if counter>=2:
			print(1)
		else:
			print(2)