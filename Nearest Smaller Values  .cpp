#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace __gnu_pbds; 
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

ll t,i,x,j,y,z,k,n;

cin>>n;
vector<ll>a,v;
rep(i,0,n,1){
	cin>>x;
	if(v.size()==0){
		v.pb(i);
		ce(0)
	}
	else{
		j=v.back();
		while(v.size() and a[j]>=x and j<i){
			v.pop_back();
			if(v.size())
				j=v.back();
		}
		if(v.size() and j<i){
			j=v.back();
			if(a[j]<x){
				ce(j+1)
			}
		}
		else{
			ce(0)
		}
		v.pb(i);
	}
	a.pb(x);
}

}
