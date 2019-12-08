def find_occurrences(t,p):
   l=len(p)
   f=[0]*l
   j=0 
   for i in range(1,l):
      while j>=0 and p[j]!=p[i]:
         if j-1>=0: j=f[j-1]
         else: j=-1 
      j+=1
      f[i]=j
   lt,lp=len(t),len(p)
   j=0
   z=0
   for i in range(lt):
      while j>=0 and t[i]!=p[j]:
         if j-1>=0: j=f[j-1]
         else: j=-1
      j+=1  
      if j==lp:
         j=f[lp-1]
         z+=1
   print(z)
s=input()
p=input()
find_occurrences(s,p)