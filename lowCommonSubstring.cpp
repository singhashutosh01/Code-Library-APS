#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int LCSS(string s1,string s2, int n,int m)
{
    int dp[n+1][m+1];
    int sol=0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
                sol=max(sol,dp[i][j]);
            }
            else{
                dp[i][j]=0;
            }
        }
    }
    return sol;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    int m=s2.length();
    cout<<LCSS(s1,s2,n,m)<<"\n";
}
