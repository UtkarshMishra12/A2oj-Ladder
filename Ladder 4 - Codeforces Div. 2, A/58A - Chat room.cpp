#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    string s;cin>>s;
    string s1("hello");
    ll j=0,c=0;
    for(ll i=0;i<s.size();i++){
        if(s[i]==s1[j]){
            j++;
            c++;
            if(c==5){
                break;
            }
        }
    }
    if(c==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
	// your code goes here
	return 0;
}
