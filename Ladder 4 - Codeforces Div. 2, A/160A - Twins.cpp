#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll n;cin>>n;
    ll coins[n], total = 0, result = 0;
    for(ll i = 0; i < n; i++){
        cin >> coins[i];
        total += coins[i];
    }

    total /= 2;
    sort(coins, coins + n);

    int sum = 0;
    for(ll i = n - 1; i >= 0; i--) {
        sum += coins[i];
        result++;
        if(sum > total)
            break;
    }

    cout << result << endl;
	// your code goes here
	return 0;
}
