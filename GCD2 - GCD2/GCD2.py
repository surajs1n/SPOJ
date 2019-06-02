def findHCF(a, b):
	if b == 0:
		return a
	return findHCF(b, a%b)

t = int(input())

for _ in range(t):
	a, b = map(int, input().split()) 

	print(findHCF(a, b))