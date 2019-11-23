import sys
for data in sys.stdin:
	data = list(map(int,data.strip().split()))
	Que = []
	for dat in data:
		if dat>0:
			Que.append(dat)
		elif dat==-2:
			print(Que.pop(Que.index(max(Que))),end=" ")

		elif dat==-1:
			print(Que.pop(Que.index(min(Que))),end=" ")
	print("")