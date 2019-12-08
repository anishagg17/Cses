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
const long long infl = 1000000000;

#define Foxen(i,s) for (i=s.begin(); i!=s.end(); i++)
#define Fill(s,v) memset(s,v,sizeof(s))
#define cout_p(x, p) cout << fixed << setprecision((p)) << x << endl     //print with precision

struct edge{
    ll a, b, cost;
};

vector<edge> e;

int32_t main(){

    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll t,i,x,j,y,z,k,n,m,v=0;       edge zx;
    cin>>n>>m;
    rep(i,0,m,1){
        cin>>zx.a>>zx.b>>zx.cost;
        zx.a--;
        zx.b--;
        e.pb(zx);
    }
    ll d[n],p[n];
    
    for ( i=0; i<n; ++i){
        p[i]=-1,d[i]=infl;
    }
    v=e[0].a;
    d[v] = 0;
    
    for ( i=0; i<n; ++i){
        x = -1;
        for (j=0; j<m; ++j){
            if (d[e[j].a] < infl && d[e[j].b] > d[e[j].a] + e[j].cost){
                d[e[j].b] = d[e[j].a] + e[j].cost;
                p[e[j].b] = e[j].a;
                x = e[j].a;
                // ce(x)
            }
        }
    }

    if (x == -1)
        cout << "NO\n";
    else{
        y = x;
        for (i=0; i<n; ++i)
            y = p[y];

        vector<ll> path;
        for (ll cur=y; ; cur=p[cur]){
            path.push_back (cur);
            if (cur == y && path.size() > 1)
                break;
        }
        reverse (path.begin(), path.end());

        cout << "YES\n";
        for (ll i=0; i<path.size(); ++i)    cout << path[i]+1 << ' ';
    }
}
