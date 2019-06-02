import sys
array = sys.stdin.readlines()

#print(array)
array = map(int, array)
#print(array)

for num in range(len(array)):
	if (array[num] == 1):
		print 1
	else:
		print 2*(array[num] - 1)
