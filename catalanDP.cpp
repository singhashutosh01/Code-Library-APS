#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll catalan(ll n)
{
	ll catalan[n + 1];
	catalan[0] = catalan[1] = 1;
	for (ll i = 2; i <= n; i++) {
		catalan[i] = 0;
		for (ll j = 0; j < i; j++)
			catalan[i] += catalan[j] * catalan[i - j - 1];
	}
	return catalan[n];
}

int main()
{
    ll n;
    cin>>n;
    cout<<catalan(n)<<"\n";
	return 0;
}




