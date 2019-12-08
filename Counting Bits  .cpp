#include <bits/stdc++.h> 
/*
https://www.geeksforgeeks.org/count-total-set-bits-in-all-numbers-from-1-to-n/
*/
using namespace std; 

long long getSetBitsFromOneToN(long long N){ 
    long long two = 2,ans = 0; 
    long long n = N; 
    while(n){ 
        ans += (N/two)*(two>>1); 
        if((N&(two-1)) > (two>>1)-1) ans += (N&(two-1)) - (two>>1)+1; 
        two <<= 1; 
        n >>= 1; 
    } 
    return ans; 
} 
int main() { 
	long long n ;
	  cin>>n;
	cout<< getSetBitsFromOneToN(n); 
	return 0; 
} 