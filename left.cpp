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
void nextSmallEle(ll *arr, ll n)
{
    ll i;
    stack<ll> s;
    vector<ll> v;
    for(i=0;i<n;i++)
    {
        if(s.empty())
        {
            v.push_back(-1);
        }
        else if(!s.empty() && s.top()<arr[i]){
            v.push_back(s.top());
        }
        else if(!s.empty() && s.top()>=arr[i]){
            while(!s.empty() && s.top()>=arr[i]){
                s.pop();
            }
            if(s.empty()){
                v.push_back(-1);
            }
            else{
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    FOR(i,n){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
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
    nextSmallEle(arr,n);
    return 0;
}
