# your code goes here
n=int(input())
x=0

while n>0:
	s=set(str(n))
	z=max(s)
	n-=int(z)
	x+=1
print(x)