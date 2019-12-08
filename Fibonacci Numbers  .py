# Fibonacci Series using 
# Optimized Method 

# function that returns nth 
# Fibonacci number 
def fib(n): 
	F = [[1, 1], 
		[1, 0]] 
	if (n == 0): 
		return 0
	power(F, n - 1) 
	return F[0][0] 
	
def multiply(F, M): 
	x = (F[0][0] * M[0][0] )%1000000007+(F[0][1] * M[1][0]) %1000000007
	y = (F[0][0] * M[0][1])%1000000007 +(F[0][1] * M[1][1]) %1000000007
	z = (F[1][0] * M[0][0])%1000000007 +(F[1][1] * M[1][0]) %1000000007
	w = (F[1][0] * M[0][1] )%1000000007+(F[1][1] * M[1][1]) %1000000007
	
	F[0][0] = x %1000000007
	F[0][1] = y %1000000007
	F[1][0] = z %1000000007
	F[1][1] = w %1000000007
	
def power(F, n): 
	if( n == 0 or n == 1): 
		return; 
	M = [[1, 1], 
		[1, 0]]; 
		
	power(F, n // 2) 
	multiply(F, F) 
		
	if (n % 2 != 0): 
		multiply(F, M) 
	
# Driver Code 
if __name__ == "__main__": 
	n = int(input())
	print(fib(n)%1000000007) 

# This code is contributed 
# by ChitraNayal 

