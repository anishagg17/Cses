#include<iostream>
#include <stdio.h> 
#include <string.h> 
  
using  namespace std;

#define endl '\n'
#define ll long long
#define ce(x) cout << x << endl;
#define Fill(s,v) memset(s,v,sizeof(s))
#define rep(i,x,n,inc) for(i=x ; i<n ; i+=inc)

ll bit[200009];

void add(ll idx, ll val,ll n) {
	// cout<<"updating "<<idx;		ll i=idx;
    for (; idx <= n; idx += (idx & -idx))
        bit[idx] += val;
    // ce(" "<<bit[i])
}

ll query(ll idx) {
    ll ret = 0;
    for (; idx > 0; idx -= (idx & -idx))
        ret += bit[idx];
    return ret;
}

int32_t main(){
ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
ll t,i,x,j,y,z,k=25,n,q,l,r;
cin>>n>>q;	
ll a[n];

rep(i,0,n,1){
	cin>>x;		a[i]=x;
	add(i+1,x,n);
}
    
while(q--){
	cin>>x;
	if(x==1){
		cin>>l>>y;
		add(l,-a[l-1],n);
		add(l,y,n);
		a[l-1]=y;
	}
	else{
		cin>>l>>r;
		ce(query(r)-query(l-1));
	}
}
}
