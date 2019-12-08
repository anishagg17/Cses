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
const int SZ = 5009;

#define Foxen(i,s) for (i=s.begin(); i!=s.end(); i++)
#define Fill(s,v) memset(s,v,sizeof(s))
#define cout_p(x, p) cout << fixed << setprecision((p)) << x << endl     //print with precision

ll a[SZ],n;
ll dp[SZ][SZ];
ll fun(ll i,ll j){
	if(i>j || i<0 ||j>=n)	return 0;
	if(dp[i][j])	return dp[i][j];
	return dp[i][j]=max(a[i]+min(fun(i+1,j-1),fun(i+2,j)) , a[j]+min(fun(i,j-2),fun(i+1,j-1)));
}

int32_t main(){
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll i,x=infl,j,k=0,l,r;
cin>>n;
rep(i,0,n,1)	cin>>a[i];
ce(fun(0,n-1))
}