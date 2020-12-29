#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll q;cin>>q;
    while(q--){
        string s;cin>>s;
        ll l=s.size();
        if(l>10){
           cout<<s[0]<<l-2<<s[l-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
	// your code goes here
	return 0;
}
