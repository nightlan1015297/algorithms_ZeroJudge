import sys
for info in sys.stdin:
	info = info.strip().split()
	data = []
	for i in range(int(info[2])):
		STR = sys.stdin.readline()
		data.append(STR.strip())
	if info[3] == "R":
   		print(info[0])
   		for dat in range(int(info[2])):
   			print(data[dat][::-1])
	elif info[3] == "I":
		print(info[0])
		for dat in range(int(info[2])-1,-1,-1):
			print(data[dat])
	else:
		print(info[0])
		for dat in range(int(info[2])-1,-1,-1):
				print(data[dat][::-1])