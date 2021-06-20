#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>
#define ll long long int
ll findMin(ll left,ll right)
{
    if(left<right){
        return left;
    }
    else
        return right;
}
ll max(ll l,ll r)
{
    if(r>l)
        return r;
    else
        return l;
}
void buildTree(ll *tree, ll *a, ll index, ll s, ll e)
{
    if(s>e){
        return;
    }
    if(s==e){
        tree[index]=a[s];
        return;
        //Leaf node
    }
    ll m=(s+e)/2;
    buildTree(tree,a,2*index,s,m);//Left Subtree
    buildTree(tree,a,2*index+1,m+1,e);//right subtree
    ll le=tree[2*index];
    ll ri=tree[2*index+1];
    tree[index]=max(le,ri);


}
ll findQuery(ll *tree,ll index, ll s, ll e,ll qs,ll qe)
{
    if(qs>e||qe<s){
        return INT_MAX;
    }
    if(s>=qs && e<=qe){
        return tree[index];
    }
    ll m=(s+e)/2;
    ll le=findQuery(tree,2*index,s,m,qs,qe);
    ll rr=findQuery(tree,2*index+1,m+1,e,qs,qe);
    return findMin(le,rr);

}
int main()
{
    ll n,i;
    ll q,l,r;
    scanf("%lld",&n);
    scanf("%lld",&q);
    ll a[n+1];
    for(i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    ll index=1,s=0,e=n-1;
    ll x = (ll)(ceil(log2(n)));
    ll maxSize = 2*(ll)pow(2, x) - 1;
    ll tree[maxSize];

    buildTree(tree,a,index,s,e);
    while(q--){
        scanf("%lld%lld",&l,&r);
        ll sol=findQuery(tree,index,s,e,l,r);
        printf("%lld\n",sol);

    }



}
