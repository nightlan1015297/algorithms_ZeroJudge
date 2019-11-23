import sys
for num in sys.stdin:
	num = int(num)
	ans = num*num-num+2
	print(ans)