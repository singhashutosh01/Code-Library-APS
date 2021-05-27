#include<bits/stdc++.h>
using namespace std;
#define ll long long 

//subset sum function

bool subsetSum(int *arr,int n,int sum)
{
    bool dp[n+1][sum+1];
    
    for(int j=1;j<=sum;j++){
        dp[0][j]=false;
    }
    for(int j=0;j<=n;j++){
        dp[j][0]=true;
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=sum;j++){
            if(arr[i-1]<=j){
                dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
            }
            else 
                dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][sum];
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,sum;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>sum;//Target sum for the subset
    
    if(subsetSum(arr,n,sum)){
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";
    
    return 0;
}
