import math
ran = "abcdefghijklmnopqrstuvwxyz"
t = int(input())
while(t>0):
	ans=""
	N = int(input())
	k=0
	i=0
	a = int((-1 + math.sqrt(1 + 8 * N))/2)
	p = N - a*(a+1)/2
	t -=1
	while(i<a):
		ans = ans + "z"
		i = i+1
	while(k<p):
		ans = ans + ran[k%26]
		k = k+1
	print(ans)
