import sys
data_amount = sys.stdin.readline()
for i in range(int(data_amount)):
	data = sys.stdin.readline().strip().split()
	a= int(data[0])
	b= int(data[1])
	c= int(data[2])
	print(max(a,b,c))
