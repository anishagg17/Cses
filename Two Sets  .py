n=int(input())
x=n*(n+1)
x=x//2
if x%2==1:
	print("NO")
	exit()
print("YES")
a=[]
b=[]
x=0
if n%2==0:
	for i in range(1,n+1,2):
		j=i+1
		if x%2==0:
			if i<=n:	a.append(i)
			if j<=n:	b.append(j)
		else:
			if j<=n:	a.append(j)
			if i<=n:	b.append(i)
		x+=1
else:
	a.append(n)
	for i in range(1,n,2):
		j=i+1
		if x%2==0:
			b.append(j)
			b.append(i)
			
		else:
			a.append(i)
			a.append(j)
		x+=1		
print(len(a))
print(*a)
print(len(b))
print(*b)