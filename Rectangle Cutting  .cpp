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

int dp[509][509];
bool check[509][509];

int cutNeeded(int n, int m){
    if(n == m)
       return 1;
    if(check[n][m])
       return dp[n][m];
    check[n][m] = true;
    int result = n*m;
    
    for(int i = 1; i <= n/2; i++){
       int tmp = cutNeeded(n - i, m) + cutNeeded(i,m);
       result = min(tmp, result); 
    }

    for(int i = 1; i <= m/2; i++){
       int tmp = cutNeeded(n , m - i) + cutNeeded(n,i);
       result = min(tmp, result); 
    }
    
    return dp[n][m] = result;
}

int32_t main(){

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll t,i,x,j,y,z,k=0,n;

cin>>x>>y;

ce(cutNeeded(x,y)-1)
}
/*
3 5
3 2
1 2
1 1

*/