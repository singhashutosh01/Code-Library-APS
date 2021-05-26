#include <bits/stdc++.h>
using namespace std;
#define ll long long 

//Function to get set bits in an integer n
ll countSetBit(ll n)
{
    ll count=0;
    while(n)
    {
        n&=(n-1);
        count+=1;
    }
    return count;
}

int main() {
    ll n;
    //Taking an integer as input
    cin>>n;
    ll count=countSetBit(n);
    cout<<count<<"\n";
    
    
	return 0;
}
