#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    string s;getline(cin,s);
    ll l= s.size();
    ll h[300]={0}, c=0;
    for(ll i=1;i<l-1;i++){
        if(s[i]==',' || s[i]==' '){
            continue;
        }
        else{
            h[s[i]]++;
        }
    }
    for(ll i=0;i<300;i++){
        if(h[i]>0){
            c++;
        }
    }
    cout<<c<<endl;
	// your code goes here
	return 0;
}
