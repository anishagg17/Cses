#include<bits/stdc++.h>
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
    for (ll _tt = 0; _tt < tt; _tt++) // testcase   

int32_t main(){

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll t,i,x,q,j,y,z,k,n,y1,y2,x2,x1;
cin>>n;
string s[n];
rep(i,0,n,1)	cin>>s[i];
if(s[n-1][n-1]=='*'){
	return cout<<0,0;
}
ll a[n][n];
rep(i,0,n,1)	rep(j,0,n,1)	a[i][j]=0;		

a[0][0]=('.'==s[0][0]);

rep(j,1,n,1){
	if(s[0][j]=='*'){
		a[0][j]=0;
		break;
	}	
	a[0][j]=a[0][j-1];
}
rep(i,1,n,1){	
	if('*'==s[i][0])	{
		a[i][0]=0;
		break;
	}
	a[i][0]=a[i-1][0];
}
rep(i,1,n,1){
	rep(j,1,n,1){
		if('*'==s[i][j])	a[i][j]=0;
		else{
			a[i][j]=0;
			// if(a[i][j-1]!=-1)	
			a[i][j]=(a[i][j]+a[i][j-1])%hell;
			// if(a[i-1][j]!=-1)	
			a[i][j]=(a[i][j]+a[i-1][j])%hell;
		}
	}
}

// rep(i,0,n,1){	rep(j,0,n,1)	{	cout<<a[i][j]<<" ";	}	ce(" ")	}
ce(a[n-1][n-1])
}
