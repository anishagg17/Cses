#include<iostream>
#include <stdio.h> 
#include <string.h> 
  
using  namespace std;

#define endl '\n'
#define ll long long
#define ce(x) cout << x << endl;
#define Fill(s,v) memset(s,v,sizeof(s))
#define rep(i,x,n,inc) for(i=x ; i<n ; i+=inc)

int32_t main(){
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll t,i,j,y,z,k=25,n,q,l,r;
cin>>n>>q;	
ll a[n],x[n];

rep(i,0,n,1){
	cin>>y;		a[i]=y;
	x[i]=(i==0)?a[i]:(a[i]^x[i-1]);
}
    
while(q--){
	cin>>l>>r;
	if(l==1){
		ce((x[r-1]))
		continue;
	}
	
	l-=2,r--;
	ce((x[r]^x[l]))
}
}
