import sys
for inpuT in sys.stdin:
	a,b,c =inpuT.split()
	a = int(a)
	b = int(b)
	c = int(c)
	delta  = (b**2-4*a*c)
	if delta < 0 :
		print("No real root")
	elif delta ==0 :
		answer=int((-b)/(2*a))
		print("Two same roots x={}".format(answer))
	else:
		int(delta**0.5)
		answer1=int((-b+delta)/(2*a)) 
		answer2=int((-b-delta)/(2*a))
		if answer1 > answer2:
			print("Two different roots x1={} , x2={}".format(answer1 , answer2))
		else:
			print("Two different roots x1={} , x2={}".format(answer2 , answer1))