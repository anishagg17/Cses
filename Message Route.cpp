#include<bits/stdc++.h>
using  namespace std;
#define endl '\n'
#define ll long long
#define pb(x) push_back(x)
#define ce(x) cout << x << endl;
using pll = pair < ll, ll >;
#define rep(i,x,n,inc) for(i=x ; i<n ; i+=inc)
#define all(a)      (a).begin(),(a).end()
#define mp(a,b) make_pair(a,b)
#define ff first
#define ss second
const long long infl = LLONG_MAX;
vector<ll> g[100009];
// vector<bool>v(100009,false);
vector<ll> dis(100009,infl);
vector<ll> p(100009,-1);

void dfs(ll u){
	// v[u]=true;
	for (ll e:g[u]){
		if(dis[e]>dis[u]+1 ){	
			dis[e]=dis[u]+1;
			p[e]=u;
			dfs(e);
		}
	}
	return;
}


int32_t main(){
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll t,i,x,j,y,z,k,m,n;

cin>>n>>m;
while(m--){
	cin>>x>>y;
	g[x].pb(y);
	g[y].pb(x);
}
dis[1]=0;
dfs(1);

if(dis[n]==infl){
	return cout<<"IMPOSSIBLE",0;
}

vector<ll>	zx;

while(n!=-1){
	zx.pb(n);
	n=p[n];
}
ce(zx.size());
while(zx.size()){
	cout<<zx.back()<<" ";
	zx.pop_back();
}
}
