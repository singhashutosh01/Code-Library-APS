#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll coinChange(ll *arr, ll n, ll sum)
{
    ll dp[n+1][sum+1];
    
    for(ll i=1;i<=sum;i++){
        dp[0][i]=0;
    }
    for(ll i=0;i<=n;i++)
        dp[i][0]=1;
        
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j]=dp[i-1][j]+dp[i][j-arr[i-1]];
            }
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][sum];
}

int main()
{
    fastIO;
    ll sum,n;
    cin>>n;
    ll arr[n+1];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    
    cin>>sum;
    
    cout<<coinChange(arr,n,sum)<<"\n";
}
