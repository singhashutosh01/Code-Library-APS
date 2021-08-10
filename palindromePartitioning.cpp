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
//O(N2) Approach
ll palindromePartition(string s){
    ll n=s.length();
    ll dp[n+1][n+1];
    for(ll g=0;g<n;g++){
        for(ll i=0,j=g;j<n;i++,j++){
            if(g==0){
                dp[i][j]=1;//single string will always be palindrome
            }
            else if(g==1){
                dp[i][j]=(s[i]==s[j]);
            }
            else{
                if(s[i]==s[j] and dp[i+1][j-1]==1){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
    }
    ll finalSol[n+1];
    finalSol[0]=0;
    for(int i=1;i<n;i++){
        if(dp[0][i]){
            finalSol[i]=0;
        }
        else{
            ll mini=INT_MAX;
            for(ll j=i;j>=1;j--){
                if(dp[j][i]){
                    mini=min(finalSol[j-1],mini);
                }
            }
            finalSol[i]=mini+1;
        }
    }
    return finalSol[n-1];
}
int main()
{
    fastIO;
    string s;
    cin>>s;
    cout<<palindromePartition(s)<<"\n";
    return 0;
}
