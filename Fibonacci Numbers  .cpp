#include <iostream>
using namespace std;
#define hell 1000000007

void multiply(long long F[2][2], long long M[2][2]); 
void power(long long F[2][2], long long n); 

long long fib(long long n) { 
	long long F[2][2] = {{1,1},{1,0}}; 
	if (n == 0) 
		return 0; 
	power(F, n-1); 
	
	return F[0][0]; 
} 

void multiply(long long F[2][2], long long M[2][2]) { 
	long long x = (F[0][0]*M[0][0])%hell + (F[0][1]*M[1][0])%hell; 
	long long y = (F[0][0]*M[0][1])%hell+ (F[0][1]*M[1][1])%hell; 
	long long z = (F[1][0]*M[0][0])%hell+ (F[1][1]*M[1][0])%hell; 
	long long w = (F[1][0]*M[0][1])%hell+ (F[1][1]*M[1][1])%hell; 
	
	F[0][0] = x%hell; 
	F[0][1] = y%hell; 
	F[1][0] = z%hell; 
	F[1][1] = w%hell; 
} 

void power(long long F[2][2], long long n) 
{ 
	long long i; 
	long long M[2][2] = {{1,1},{1,0}}; 
	
	// n - 1 times multiply the matrix to {{1,0},{0,1}} 
	for (i = 2; i <= n; i++) 
		multiply(F, M); 
} 

/* Driver program to test above function */
int main() { 
long long n ;
cin>>n;
cout<<(fib(n))%hell;
} 

