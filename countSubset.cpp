#include<bits/stdc++.h>
using namespace std;
#define ll long long 

//count subset having the target sum

int countSubset(int *arr,int n,int sum)
{
   int dp[n+1][sum+1];
   for(int i=1;i<=sum;i++){
       dp[0][i]=0;
   }
   for(int i=0;i<=n;i++){
       dp[i][0]=1;
   }
   for(int i=1;i<=n;i++){
       for(int j=1;j<=sum;j++){
           if(arr[i-1]<=j){
               dp[i][j]=dp[i-1][j]+dp[i-1][j-arr[i-1]];
           }
           else{
               dp[i][j]=dp[i-1][j];
           }
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
    
    cout<<countSubset(arr,n,sum)<<"\n";
}
