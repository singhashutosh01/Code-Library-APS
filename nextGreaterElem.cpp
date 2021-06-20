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
void solve(ll *a,ll n)
{
    vv v;
    stack<ll> s;
    ll i;
    for(ll i=n-1;i>=0;i--)
    {
        if(s.empty()){
            v.pb(-1);
        }
        else if(!s.empty() && s.top()>a[i]){
            v.pb(s.top());
        }
        else{
            while(!s.empty() && s.top()<a[i]){
            s.pop();
            }
            if(s.empty())
                v.pb(-1);
            else
                v.pb(s.top());
        }
        s.push(a[i]);
    }
    reverse(v.begin(),v.end());
    FOR(i,n)
        cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    //fastIO;
    ll n,i;
    cout<<"Enter the number of elements\n";
    cin>>n;
    ll a[n];
    FOR(i,n){
    cin>>a[i];
    }
    solve(a,n);
}
