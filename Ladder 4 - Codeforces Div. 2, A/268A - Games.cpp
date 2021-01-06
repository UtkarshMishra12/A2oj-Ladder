#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll a[n],b[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }
    ll c=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            if(a[i]==b[j]){
                c++; 
            }
        }
    }
    cout<<c;
    // your code goes here
	return 0;
}
