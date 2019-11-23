import sys
for info in sys.stdin:
	for i in range(1,int(info)):
		if i%7!=0:	
			print(i,end=" ")
	print("\n",end="")