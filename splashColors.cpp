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
int main()
{
    fastIO;
    ll t,n,dp[10001],per[10001];
    memset(dp,0,sizeof(dp));
    memset(per,0,sizeof(per));
    cin>>t;
    dp[1]=1;
    ll cnt=1;
    for(ll i=2;i<=10000;i++){
            dp[i]=4*(i-1)+dp[i-1];
        }
        for(ll i=1;i<=10000;i++){
            per[i]=4*cnt;
            cnt+=2;
        }
    while(t--){
        cin>>n;
        cout<<dp[n]<<" "<<per[n]<<"\n";
        
    }
}
