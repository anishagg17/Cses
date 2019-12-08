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

vector<ll> g[100009];
vector<bool>v(100009,false);

void dfs(ll u){
	v[u]=true;
	for (ll e:g[u]){
		if(!v[e])	dfs(e);
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
ll pre=-1,cur=-1;
vector<pll>	zx;
rep(i,1,n+1,1){
	if(!v[i]){
		dfs(i);
		pre=cur;
		cur=i;
		if(pre!=-1 && cur!=-1){
			zx.pb(mp(pre,cur));
		}
	}
	
}
ce(zx.size());
for(auto zi:zx){
	ce(zi.ff<<" "<<zi.ss)
}
}
