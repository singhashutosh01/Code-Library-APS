#include<bits/stdc++.h>
using namespace std;
#define ll long long 

//0-1 knapsack Function Top Down Approach

int knapsack(int *wt, int *val, int n, int w)
{
    int dp[n+1][w+1];
    
    //Intializing the table
    
    for(int i=0;i<n+1;i++)
        dp[i][0]=0;
    
    for(int i=0;i<w+1;i++)
        dp[0][i]=0;
    
    for(int i=1;i<n+1;i++){
        for(int j=1;j<w+1;j++){
            //If chosen wt is less than the current capacity j then update the max val
            if(wt[i-1]<=j){
                //d[i][j-wt[i-1]] same item being processes again
                dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    
    //return the max profit
    return dp[n][w];
}

int main()
{
    int n,W;
    cin>>n;//Number of elements
    cin>>W;//Maximum capacity of the knapsack
    int wt[n+1],val[n+1];
    
    //Taking the value of each item
    for(int i=0;i<n;i++){
        cin>>val[i];
    }
    
    //Taking the wt of each item
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }
    
    cout<<knapsack(wt,val,n,W)<<"\n";
    
    return 0;
}
