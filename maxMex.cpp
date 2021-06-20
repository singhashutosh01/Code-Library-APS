/*Given an array arr[] consisting of N distinct integers and an integer K, the task is to find the maximum MEX from all subarrays of length K.

The MEX is the smallest positive integer that is not present in the array.*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define llL long long
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
#define FOR(i,n) for(i=0;i<n;i++)
#define FOR1(i,n) for(i=1;i<n;i++)
#define FOR2(i,n) for(i=1;i<=n;i++)
#define FOR3(i,k,n) for(i=k;i<n;i++)
ll maxMex(ll *arr,ll n,ll k)
{
   ll i;
   set<ll> s;
   for(i=1;i<=n+1;i++)
    s.insert(i);
   ll mex=0,ans=0;
   FOR(i,k)
   {
       s.erase(arr[i]);
   }
   mex=*(s.begin());
   ans=mex;
   FOR3(i,k,n)
   {
       s.erase(arr[i]);
       s.insert(arr[i-k]);
       mex=*(s.begin());
       ans=max(mex,ans);
   }
   return ans;
}
int main()
{
    ll n,k,i;
    cout<<"Enter the number of elements:\n";
    cin>>n;
    ll arr[n+1];
    FOR(i,n)
    cin>>arr[i];
    cout<<"Enter the size of array:\n";
    cin>>k;
    ll res=maxMex(arr,n,k);
    cout<<res<<"\n";
}
