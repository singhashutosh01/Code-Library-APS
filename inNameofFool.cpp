#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i,n) for(i=0;i<n;i++)
#define FOR1(i,a,b) for(i=a;i<b;i++)
#define FOR2(i,n) for(i=1;i<=n;i++)
#define pb push_back
#define vv vector<ll> 
#define mod 1e9+7
int main()
{
    fastIO;
    int n,i;
    cin>>n;
    string a[n+1];
    FOR2(i,n){
        cin>>a[i];
    }
    int q;
    string s;
    cin>>q;
    while(q--){
        int cnt=0;
        cin>>s;
        FOR2(i,n){
            if(s==a[i])
                cnt+=1;
        }
        cout<<cnt<<"\n";
        
    }
}
