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
const int inf = 0x3f3f3f3f;

#define Foxen(i,s) for (i=s.begin(); i!=s.end(); i++)
#define Fill(s,v) memset(s,v,sizeof(s))
#define cout_p(x, p) cout << fixed << setprecision((p)) << x << endl     //print with precision

#define tc(tt) \
    ll tt;    \
    cin >> tt; \
    for (ll _tt = 0; _tt < tt; _tt++) // testcase 

int32_t main(){

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll t,i,x,j,y,z,k=0,n;
cin>>n;	ll a[n],b[n],ans[n];
priority_queue<pll, vector<pll>, greater<pll>> p;
multiset<pair<pll,ll>>m;

rep(i,0,n,1){
	cin>>a[i]>>b[i];
	m.insert(mp(mp(a[i],b[i]),i));
}

for(auto zx:m){	
	ll a=zx.ff.ff,b=zx.ff.ss,c=zx.ss;
	
	if(p.empty()||p.top().ff>=a){
		x=++k;
	}
	else{
		x=p.top().ss;
		p.pop();
	}
	p.push(mp(b,x));
	ans[c]=x;
}

ce(*max_element(ans,ans+n))
rep(i,0,n,1)cout<<ans[i]<<" ";
}