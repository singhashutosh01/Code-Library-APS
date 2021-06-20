#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,n) for(i=0;i<n;i++)
#define FOR1(i,a,b) for(i=a;i<b;i++)
#define FOR2(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define vv vector<ll>
#define mod 1e9+7
ll unboundedKs(ll *a,ll n, ll m)
{
    ll dp[m+1]={0};
    for(int i=0;i<=m;i++){
        for(int j=0;j<n;j++){
            if(a[j]<=i){
                dp[i]=max(dp[i],dp[i-a[j]]+a[j]);
            }
        }
    }
    return dp[m];
}
int main()
{
    fastIO;
    ll n,m,i;
    cin>>n>>m;
    ll a[n+1];
    FOR(i,n)
        cin>>a[i];
    ll res=unboundedKs(a,n,m);
    cout<<res<<"\n";


}

