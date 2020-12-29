#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    string s;cin>>s;
    string s1;
    ll l=s.size();
    for(ll i=0;i<l;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y'){
           continue;
        }
        else{
            s1+='.';
            s1+=tolower(s[i]);
        }
    }
    cout<<s1;
	// your code goes here
	return 0;
}
