import sys
for string in sys.stdin:
    print(int(string.strip()[::-1]))