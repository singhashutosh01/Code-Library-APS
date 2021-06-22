#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
map<ll,ll> m;
int main()
{
    fastIO;
    ll n,k,a,b;
    
    cin>>n>>k;
    for(ll i=0;i<n;i++){
        cin>>a>>b;
        m[a]+=b;
        
    }
    for(auto i:m){
        if(k>=i.first){
            k+=i.second;
        }
    }
    cout<<k<<"\n";
    
}
