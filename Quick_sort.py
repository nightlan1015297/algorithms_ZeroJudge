List = [1,5,9,7,56,15,74965,1564,1894,8465132,-19,9874]
def partition(start,stop):
	global List
	First = start
	cutnum = List[start]
	while True:
		while True:
			start+=1
			if List[start]>=cutnum:
				break
		while True:
			stop-=1
			if List[stop]<=cutnum:
				break
		if start<stop:
			Temp = List[start]
			List[start]=List[stop]
			List[stop] =Temp
		else:
			break
	List[First]=List[stop]
	List[stop] =cutnum
	return stop
def Quick_sort(start,stop):
	if start<stop:
		mid = partition(start,stop)
		Quick_sort(start,mid-1)
		Quick_sort(mid+1,stop)
#MAIN
Inf = 999**9
List.append(Inf)
Quick_sort(0,len(List)-1)
List.remove(Inf)
print(List)



