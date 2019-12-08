#include<bits/stdc++.h>
using  namespace std;

#define endl '\n'
#define ll long long
#define ce(x) cout << x << endl;
#define rep(i,x,n,inc) for(i=x ; i<n ; i+=inc)


char s[1003][1003];
string t="";

bool dfs(ll i, ll j,ll n,ll m){
	if(i==n || j==m)	return false;
	if(s[i][j]=='B')	return true;
	s[i][j]='#';
	
	if(j-1>=0 and s[i][j-1]!='#'){
		if(dfs(i,j-1,n,m)){
			t='L'+t;
			return true;
		}
	}
	
	if(j+1<m and s[i][j+1]!='#'){
		if(dfs(i,j+1,n,m)){
			t='R'+t;
			return true;
		}
	}
	
	if(i+1<n and s[i+1][j]!='#'){
		if(dfs(i+1,j,n,m)){
			t='D'+t;
			return true;
		}
	}
	
	if(i-1>=0 and s[i-1][j]!='#'){
		if(dfs(i-1,j,n,m)){
			t='U'+t;
			return true;
		}	
	}
	return false;
}

int32_t main(){

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll i,x,j,y,z,k=0;		ll n,m;
cin>>n>>m;
rep(i,0,n,1)	cin>>s[i];

rep(i,0,n,1)	rep(j,0,m,1)	{
	if(s[i][j]=='A')	{	x=i,y=j;	break;	}
}

bool br=dfs(x,y,n,m);
if(br)	cout<<"YES"<<endl<<t.size()<<endl<<t;

else	ce( "NO")
}		//LDDRRRRRU
