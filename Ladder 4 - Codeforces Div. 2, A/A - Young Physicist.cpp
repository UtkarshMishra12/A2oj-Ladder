#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll x,y,z,xs=0,xy=0,xz=0;
    while(n--){
        cin>>x>>y>>z;
        xs+=x;
        xy+=y;
        xz+=z;
    }
    if(xs==0 && xy==0 && xz==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
	// your code goes here
	return 0;
}