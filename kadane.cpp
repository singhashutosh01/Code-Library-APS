#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void kadane(int *arr,int n)
{
    ll curSum=0;
    ll sol=INT_MIN;
    for(int i=0;i<n;i++){
        curSum+=arr[i];
        sol=max(sol,curSum);
        if(curSum<0){
            curSum=0;
        }
    }
    cout<<sol<<"\n";
}
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    kadane(arr,n);
    return 0;
}
