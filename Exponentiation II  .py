hell=1000000007
t=int(input())
while t:
	t-=1
	a,b,c=[int(i) for i in input().split()]
	x=pow(b,c,hell-1)
	y=pow(a,x,hell)
	print(y%hell)
	
'''
2187
50625
763327764
928742408
'''