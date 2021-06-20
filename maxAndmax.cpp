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
#define mod 1e9+7
#include<stack>
ll kadane(ll *a,ll n)
{
    ll ans=INT_MIN,cur=0,i;
    ll i1=0,i2=0,i3=0;
    ll cnt=0;
 
    FOR(i,n)
    {
        if(a[i]!=-10000005){
        cur+=a[i];
        if (ans < cur){
            ans = cur;
            i1=i3;
            i2=i;
        }
 
        if (cur < 0){
            cur = 0;
            i3=i+1;
        }
        }
        else{
            cnt++;
        }
    }
    for(i=i1;i<=i2;i++){
        a[i]=-10000005;
    }
    if(cnt==n){
        ans=0;
    }
    return ans;
}


int main()
{
    fastIO;
    ll n,i;
    cin>>n;
    ll a[n+1];
    ll cnt=0,cnt2=0;
    FOR(i,n){
        cin>>a[i];
        if(a[i]>=0){
            cnt++;
        }
        else{
            cnt2++;
        }
    }

    
    ll x=kadane(a,n);
    cout<<x<<"\n";
    x=kadane(a,n);
    if(cnt==n){
        x=0;
    }
    else if(n==1){
        x=0;
    }
    
    cout<<x<<"\n";
    


}

