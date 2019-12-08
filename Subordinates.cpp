#include <iostream>
#include <bits/stdc++.h>
using  namespace std;

#define endl '\n'
#define ll long long
#define re register
#define pb(x) push_back(x)
#define ce(x) cout << x << endl;

using db = long double;
using pii = pair < int, int >;
using pll = pair < ll, ll >;
#define scl1(a)             scanf(“%I64d", &a)
#define scl2(a, b)          scanf("%lld %lld", &a, &b)

#define rep(i,x,n,inc) for(i=x ; i<n ; i+=inc)
#define repr(i,x,n,inc) for( i=x ; i>n ; i+=inc)
#define all(a)      (a).begin(),(a).end()
#define rall(x) (x).rbegin(), (x).rend()
#define unique_sort(x) sort(all(x)), x.resize(distance(x.begin(), unique(all(x))))

#define mp(a,b) make_pair(a,b)
#define ff first
#define ss second
#define hell 1000000007
const db pi = acos(-1);
const long long infl = LLONG_MAX;


vector<ll> adj[200009];			ll ans[200009],n;

void dfs(ll v){
	if(v>=n)	return;
	ll x=0;
	if(adj[v].size()==0){
		return;
	}
	for(auto u:adj[v]){
		if(ans[u]==0){
			dfs(u);
		}
		x+=1+ans[u];
	}
	ans[v]=x;
}

int32_t main(){
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll t,i,x,j,y,z,k;

cin>>n;
rep(i,1,n,1){
	cin>>x;
	x--;
	adj[x].pb(i);
}
dfs(0);

rep(i,0,n,1)	cout<<ans[i]<<" ";
}
