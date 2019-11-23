import sys
for string in sys.stdin:
	counter = 0
	maximus = 0
	for char in string:
		if char==" ":
			counter+=1
		elif counter!=0 and char!=" ":
			maximus = max(counter,maximus)
			counter=0
	print(maximus)
	print((maximus//2)+(maximus%2))