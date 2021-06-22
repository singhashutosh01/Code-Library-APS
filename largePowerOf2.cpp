ll findPower(ll a,ll n)
{
    ll sol=1;
    a=a%mod;
    while(n){
        if(n&1){
            sol=(sol*a)%mod;
        }
        n=n>>1;
        a=(a*a)%mod;
    }
    return sol;
}
