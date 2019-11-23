import sys
for num in sys.stdin:
	if num!=0:
		for i in range(int(num)):
			print("_"*(int(num)-i-1)+"+"*(i+1))
	else:
		break