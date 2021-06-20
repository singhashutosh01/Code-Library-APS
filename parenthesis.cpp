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
bool checkBalance(string s)
{
    stack<char> t;
    int i,n=s.length(),f=0;
    FOR(i,n){
        if(s[i]=='{'|| s[i]=='[' || s[i]=='(')
            t.push(s[i]);
        else if(t.empty())
            return false;
        else if(s[i]=='}' || s[i]==']' || s[i]==')'){
            char z=t.top();
            t.pop();
            if(s[i]=='}' && z!='{'){
                f=1;
                break;
            }
            else if(s[i]==']' && z!='['){
                f=1;
                break;
            }
            else if(s[i]==')' && z!='('){
                f=1;
                break;
            }
        }
    }
    if(!t.empty() || f==1)
        return false;
    else
        return true;

}
int main()
{
    fastIO;
    int t,i;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool val= checkBalance(s);
        if(val)
            cout<<"Balanced\n";
        else
            cout<<"Not Balanced\n";
    }
}
