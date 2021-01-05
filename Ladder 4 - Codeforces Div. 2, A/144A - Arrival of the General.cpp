#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll max=0,min=1000,maxi=0,mini=0;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        if(x>max){
            maxi=i;
            max=x;
        }
        if(x<=min){
            mini=i;
            min=x;
        }
    }
    if(maxi>mini){
        cout<<(maxi-1)+(n-mini)-1;
    }
    else{
        cout<<(maxi-1)+(n-mini);
    }
	// your code goes here
	return 0;
}
