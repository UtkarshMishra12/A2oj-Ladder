#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll a=0;
    while(n--){
        ll arr[3];
        ll c=0;
        for(ll i=0;i<3;i++){
            cin>>arr[i];
        }
        for(ll i=0;i<3;i++){
            if(arr[i]==1){
                c++;
            }
        }
        if(c>=2){
            a++;
        }
    }
    cout<<a;
	// your code goes here
	return 0;
}
