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
#define fin(v,i) find(v.begin(),v.end(),i)-v.begin()
#define rv(v) reverse(v.begin(),v.end())
#define mod 1e9+7
/* Maximum Sum Increasing Subsequence */
int maximumSumSubsequnce(int *arr, int n){
    int dp[n+1];
    dp[0]=arr[0];
    int ans=dp[0];
    for(int i=1;i<n;i++){
        int ma=0;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i] && dp[j]>ma){
                ma=dp[j];
            }
        }
        dp[i]=ma+arr[i];
        ans=max(dp[i],ans);
    }
    return ans;
}
int main()
{
    fastIO;
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maximumSumSubsequnce(arr,n)<<"\n";
    return 0;
}
