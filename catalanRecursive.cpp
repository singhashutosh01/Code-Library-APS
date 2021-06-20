#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll catalan(ll n)
{
	if (n <= 1)
		return 1;

	ll res = 0;
	for (ll i = 0; i < n; i++)
		res += catalan(i)
			* catalan(n - i - 1);

	return res;
}

int main()
{
    ll n;
    cin>>n;
    cout<<catalan(n)<<"\n";
	return 0;
}
