#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int value=ceil((double)m/a)*ceil((double)n/a);
    cout<<value ;
	// your code goes here
	return 0;
}
