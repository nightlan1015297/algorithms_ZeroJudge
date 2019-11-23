import sys
for strings in sys.stdin:
	string = strings.strip().split()
	print(string[1],end="")
	for i in string[2:]:
		print(" "+string[0],end=" ")
		print(i,end="")
	print("")