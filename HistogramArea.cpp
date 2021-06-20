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
#include<stack>

//Maximum Area of Histogram 

vv nsr(ll *arr, ll n)
{
    stack<pair<ll,ll>> s;
    vv v;
    for(ll i=n-1;i>=0;i--)
    {
        if(s.empty())
        {
            v.pb(n);
        }
        else if(!s.empty() && s.top().first<arr[i])
        {
            v.pb(s.top().second);
        }
        else if(!s.empty() && s.top().first>=arr[i])
        {
            while(!s.empty() && s.top().first>=arr[i])
            {
                s.pop();
            }
            if(s.empty()){
                v.pb(n);
            }
            else{
                v.pb(s.top().second);
            }
        }
        s.push({arr[i],i});
        
    }
    rv(v);
    return v;
}
vv nsl(ll *arr, ll n)
{
    stack<pair<ll,ll>>s;
    vv v;
    ll i;
    FOR(i,n)
    {
        if(s.empty())
        {
            v.pb(-1);
        }
        else if(!s.empty() && s.top().first<arr[i])
        {
            v.pb(s.top().second);
        }
        else if(!s.empty() && s.top().first>=arr[i])
        {
            while(!s.empty() && s.top().first>=arr[i])
            {
                s.pop();
            }
            if(s.empty())
            {
                v.pb(-1);
            }
            else {
                v.pb(s.top().second);
            }
        }
        s.push({arr[i],i});
    }
    return v;
}
int main()
{
    fastIO;
    ll n,i;
    cin>>n;
    ll arr[n+1];
    FOR(i,n){
        cin>>arr[i];
    }
    vv r=nsr(arr,n);
    vv l=nsl(arr,n);
    vv sol;
    FOR(i,n){
        sol.pb((r[i]-l[i]-1)*arr[i]);
    }
    cout<<*max_element(sol.begin(),sol.end())<<"\n";
    return 0;
    
}
