#include<bits/stdc++.h>
using namespace std;
#define ll long long

//Function for longest increasing subsequence
ll longSub(ll *a, ll n)
{
    ll LIS[n+1],i,j;
    for(ll i=0;i<n;i++)
        LIS[i]=1;
    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(a[i]>a[j] && LIS[i]<LIS[j]+1)
                LIS[i]=LIS[j]+1;
        }
    }
    ll *x=max_element(LIS,LIS+n);
    return *x;
}
int main()
{
    ll n,i;
    //Number of elements in an array
    cin>>n;
    ll a[n+1];
    FOR(i,n)
    {
      //Array Input
        cin>>a[i];
    }
    ll sol=longSub(a,n);
    cout<<sol<<"\n";
}
