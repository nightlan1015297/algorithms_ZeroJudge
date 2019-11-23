import sys
key = 7

for i in sys.stdin:
	answer = ''
	for char in i:
		AHCIINUM = ord(char)
		Alpha = chr(AHCIINUM - key)
		answer = answer + Alpha
	print(answer)