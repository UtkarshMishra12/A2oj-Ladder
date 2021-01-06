#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    string s;cin>>s;
	int f=1;
	for(ll i=0;i<s.size();i++){
	    if(s[i]=='W'&& s[i+1]=='U' && s[i+2]=='B'){
	        i+=2;
	        if(!f){
	            cout<<" ";
	        }
	        continue;
	    }
	    else {
	        f=0;
	        cout<<s[i];
	    }
	}
	// your code goes here
	return 0;
}
