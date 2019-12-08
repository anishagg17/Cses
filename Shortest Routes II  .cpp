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

ll t,i,x,j,y,z,k,n,m,q;

cin>>n>>m>>q;
ll dp[n+1][n+1];

for(k = 1; k <= n; k++){
    for(i = 1; i <= n; i++){
        dp[i][k]=infl;
    }
}

rep(i,0,m,1){
    cin>>x>>y>>z;
    dp[x][y]=min(dp[x][y],z);
    dp[y][x]=min(dp[y][x],z);
}

for(k = 1; k <= n; k++){
    dp[k][k]=0;
}

for(k = 1; k <= n; k++){
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if(dp[i][k]!=infl && dp[k][j]!=infl)
            dp[i][j] = min( dp[i][j], dp[i][k] + dp[k][j] );
        }
    }
}

while(q--){
    cin>>x>>y;
    if(dp[x][y]==infl)  dp[x][y]=-1;
    ce(dp[x][y])
}
}
