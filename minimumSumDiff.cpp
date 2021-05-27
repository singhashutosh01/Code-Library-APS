#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int minimumSum(int *arr,int n)
{
    int sum=0;
   for(int i=0;i<n;i++){
       sum+=arr[i];
   }
   bool dp[n+1][sum+1];
   
   for(int i=1;i<=sum;i++){
       dp[0][i]=false;
   }
   for(int i=0;i<=n;i++){
       dp[i][0]=true;
   }
   for(int i=1;i<=n;i++){
       for(int j=1;j<=sum;j++){
           if(arr[i-1]<=j){
               dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
           }
           else{
               dp[i][j]=dp[i-1][j];
           }
       }
   }
   vector<int> v;
   for(int i=0;i<=sum/2;i++){
       if(dp[n][i]){
           v.push_back(i);
       }
   }
   int res=INT_MAX;
   for(auto itr:v){
       res=min(res,sum-2*itr);
   }
   return res;
}


int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<minimumSum(arr,n)<<"\n";
}
