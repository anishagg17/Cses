#include<iostream>
#include <stdio.h> 
#include <string.h> 
  
using  namespace std;

#define endl '\n'
#define ll long long
#define ce(x) cout << x << endl;
#define Fill(s,v) memset(s,v,sizeof(s))
#define rep(i,x,n,inc) for(i=x ; i<n ; i+=inc)

ll a[200009][20];

ll fun(ll L,ll R){
	ll v = 1000000009;
	for (int j = 25; j >= 0; j--) {
    	if ((1 << j) <= R - L + 1) {
    		v=min(v,a[L][j]);
        	L += 1 << j;
    	}
	}
	return (v);
}

int32_t main(){

	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll t,i,x,j,y,z,k=25,n,q;
cin>>n>>q;	
// int log[n+1];	 log[1] = 0;
// for (i = 2; i <= n; i++)    log[i] = log[i/2] + 1;

Fill(a,1000000009);
rep(i,0,n,1)	cin>>a[i][0];

for(j=1;j<=k;j++){
	for(i=0;i+(1<<j)<=n;i++){
		a[i][j]=min(a[i][j-1],a[i+ (1<<(j-1)) ][j-1]);
	}
}

    
while(q--){
	cin>>x>>y;
	x--,y--;
	// j = log[y - x + 1];
	// ce(min(a[x][j], a[y - (1 << j) +1][j]));
	ce(fun(x,y));
}
}
