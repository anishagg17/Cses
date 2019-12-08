#include<iostream>
using  namespace std;
#define ll long long
#define ce(x) cout << x << '\n';
#define rep(i,x,n,inc) for(i=x ; i<n ; i+=inc)

char s[1003][1003];

void dfs(ll i, ll j,ll n,ll m){
	if(i==n || j==m)	return;
	s[i][j]='#';
	if(i+1<n and s[i+1][j]!='#'){
			dfs(i+1,j,n,m);
	}
	if(j+1<m and s[i][j+1]!='#'){
			dfs(i,j+1,n,m);
	}
	if(j-1>=0 and s[i][j-1]!='#'){
			dfs(i,j-1,n,m);
	}
	if(i-1>=0 and s[i-1][j]!='#'){
			dfs(i-1,j,n,m);
	}
	
	return;
}

int32_t main(){

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll t,i,x,j,y,z,k=0;		ll n,m;
cin>>n>>m;
rep(i,0,n,1)	rep(j,0,m,1)	cin>>s[i][j];

rep(i,0,n,1){
	rep(j,0,m,1){
		if(s[i][j]!='#'){
			dfs(i,j,n,m);
			k++;
		}
	}
}
ce(k)
}
