#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll x = 0;
    for (ll i = 1; i <= 5; ++i)
    {
        for (ll j = 1; j <= 5; ++j)
        {
            cin >> x;
            if (x == 1)
            {
                cout << abs(i - 3) + abs(j - 3) << endl;
            }
        }
    }
	// your code goes here
	return 0;
}
