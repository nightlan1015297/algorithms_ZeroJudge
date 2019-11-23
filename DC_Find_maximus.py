def devide_and_counquer(start,stop):
	global List

	if start==stop :
		return List[stop]
	if start==stop-1 :
		return max(List)

	max1 = devide_and_counquer(start,(start+stop)//2)
	max2 = devide_and_counquer((start+stop)//2+1,stop)
	return max(max1,max2)

List= [1,2,3,999,5,6,7,600,9,500]
print(devide_and_counquer(0,len(List)-1)) 