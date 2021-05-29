#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll countCoin(ll *coin, ll n, ll sum)
{
    ll dp[n+1][sum+1];
    for(ll i=1;i<=sum;i++)
        dp[0][i]=INT_MAX-1;
    for(ll i=0;i<=n;i++)
        dp[i][0]=0;
        
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=sum;j++){
            if(coin[i-1]<=j){
                dp[i][j]=min(dp[i-1][j],1+dp[i][j-coin[i-1]]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    if(dp[n][sum]>=INT_MAX-1){
        return -1;
    }
    else{
        return dp[n][sum];
    }
        
}
int main()
{
    fastIO;
    ll n, sum;
    cin>>n;
    ll coin[n+1];
    for(ll i=0;i<n;i++)
        cin>>coin[i];
    cin>>sum;
    
    cout<<countCoin(coin,n,sum)<<"\n";
    
    return 0;
}
