#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,n) for(i=0;i<n;i++)
#define FOR1(i,a,b) for(i=a;i<b;i++)
#define FOR2(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define ps push
#define vv vector<ll>
#define ss stack<ll>
#define sc stack<char>
#define rv(v) reverse(v.begin(),v.end())
#define mod 1e9+7
#include<stack>
ll sol(ll *a, ll n, ll k)
{
	ll hash[k] = {0};
	ll ans = 0,i;
	FOR(i,n) {
		ll r = a[i] % k;
		ans+=hash[(k+r)%k];
		hash[r]++;
	}
 
	return ans;
}
 
int main()
{
    fastIO;
    ll n,i;
    cin>>n;
    ll a[n+1];
    FOR(i,n){
        cin>>a[i];
    }
    cout<<sol(a,n,200)<<"\n";
}
