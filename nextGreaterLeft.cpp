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
#define rv(v) reverse(v.begin(),v.end())
#define mod 1e9+7
#include<stack>
void solve(ll *a, ll n)
{
    vector<ll> res;
    stack<ll> s;
    ll i;
    FOR(i,n){
       if(s.empty()){
        res.pb(-1);
       }
       else if(!s.empty()&&s.top()>a[i]){
        res.pb(s.top());
       }
       else if(!s.empty()&&s.top()<=a[i]){
        while(!s.empty()&&s.top()<=a[i]){
            s.pop();
        }
        if(s.empty())
            res.pb(-1);
        else
            res.pb(s.top());
       }
       s.push(a[i]);
    }
    FOR(i,n)
    {
        cout<<res[i]<<" ";
    }
    cout<<"\n";
}
int main()
{
    ll n,i;
    cout<<"Enter the number of elements:\n";
    cin>>n;
    cout<<"Enter the elements\n";
    ll a[n+1];
    FOR(i,n){
    cin>>a[i];
    }
    solve(a,n);
}
