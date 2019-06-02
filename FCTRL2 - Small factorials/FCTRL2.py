t = int(input())
while t>0:
	n = int(input())
	pro = 1
	while n>0:
		pro = pro * n
		n = n - 1
	print(pro)
	t = t - 1