#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    string s;cin>>s;
    ll l=s.size();
    string s1;
    for(ll i=0;i<l;i++){
        if(s[i]=='+'){
            continue;
        }
        else{
           s1+=s[i];
        }
    }
    sort(s1.begin(),s1.end());
    string s2;
    for(ll i=0;i<s1.size();i++){
        s2+='+';
        s2+=s1[i];
    }
    for(ll i=1;i<s2.size();i++){
        cout<<s2[i];
    }
	// your code goes here
	return 0;
}
