#include<bits/stdc++.h>
using  namespace std;
#define endl '\n'
#define ll long long
#define pb(x) push_back(x)
#define ce(x) cout << x << '\n';
using pll = pair < ll, string >;

#define rep(i,x,n,inc) for(i=x ; i<n ; i+=inc)
#define all(a)      (a).begin(),(a).end()
#define mp(a,b) make_pair(a,b)
#define ff first
#define ss second
#define hell 1000000007

#define tc(tt) \
    ll tt;    \
    cin >> tt; \
    for (ll _tt = 0; _tt < tt; _tt++) // testcase   


long long  powmod(long long  x,long long  k)
{
    long long  ans=1;
    for(;k;k>>=1,x=(x*x)%hell)
        if(k&1)
            ans=(ans*x)%hell;
    return ans%hell;
}
int32_t main(){

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll t,i,x,j,y,z,k,n;

tc(tt){
	cin>>x>>y;	
	k=powmod(x,y);
	ce(k)
}
}
