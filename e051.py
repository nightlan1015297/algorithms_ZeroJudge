import sys
for string in sys.stdin:
	string = string.strip()
	print(string[0],end="")
	print("_"*(len(string)-2),end="")
	print(string[-1])