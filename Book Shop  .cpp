#include <bits/stdc++.h>
using  namespace std;
#define ll long long
using pll = pair < ll, ll >;
#define rep(i,x,n,inc) for(i=x ; i<n ; i+=inc)
#define ff first
#define ss second
int main(){
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll t,i,x,j,y,n;	

cin>>n>>t;

ll dp[t+1]={0};	pll a[n];

rep(i,0,n,1)cin>>a[i].ff;		//price
rep(i,0,n,1)cin>>a[i].ss;		//pages

sort(a,a+n);

rep(i,0,n,1){
	y=a[i].ss;	x=a[i].ff;
	for(j=t;j>=x;j--)	dp[j]=max(dp[j],y+dp[j-x]);
}	
cout<<dp[t];
}
