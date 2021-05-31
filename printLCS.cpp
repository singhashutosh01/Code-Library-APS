#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

string printLCS(string s1,string s2, int n,int m)
{
    int dp[n+1][m+1];
    string s;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0||j==0){
                dp[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    int i=n;
    int j=m;
    while(i>0||j>0){
        if(s1[i-1]==s2[j-1]){
            s.push_back(s1[i-1]);
            i-=1;
            j-=1;
        }
        else{
            if(dp[i-1][j]>dp[i][j-1]){
                i--;
            }
            else{
                j--;
            }
        }
    }
    reverse(s.begin(),s.end());
    return s;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.length();
    int m=s2.length();
    cout<<printLCS(s1,s2,n,m)<<"\n";
}
