#include<iostream>
using  namespace std;

#define endl '\n'
#define ll long long
#define ce(x) cout << x << endl;

#define rep(i,x,n,inc) for(i=x ; i<n ; i+=inc)

int32_t main(){

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll t,i,x,j,y,z,k,n,q;
cin>>n>>q;
ll a[n],p[n+1];
rep(i,0,n,1)	cin>>a[i],p[i+1]=p[i]+a[i];
while(q--){
	cin>>x>>y;
	ce(p[y]-p[x-1])
}
}
