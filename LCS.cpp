#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int LCS(string s1,string s2)
{
    int n=s1.length();
    int m=s2.length();
    int dp[n+1][m+1];
    
    for(int i=0;i<=m;i++)
        dp[0][i]=0;
    for(int i=0;i<=n;i++){
        dp[i][0]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}
int main()
{
    fastIO;
    string s1,s2;
    cin>>s1>>s2;
    cout<<LCS(s1,s2)<<"\n";
    
}
