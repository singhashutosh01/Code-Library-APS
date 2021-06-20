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

int kadaneAlgo(ll arr[], ll &start, ll &end, ll n) {
   ll sum = 0, maxSum = INT_MIN;
   end = -1;
   ll tempStart = 0;
   for (ll i = 0; i < n; i++) {
      sum += arr[i];
      if (sum < 0) {
         sum = 0;
         tempStart = i+1;
      }else if (sum > maxSum) {
         maxSum = sum;
         start = tempStart;
         end = i;
      }
   }

   if (end != -1)
      return maxSum;
   maxSum = arr[0];
   start = end = 0;
   for (ll i = 1; i < n; i++) {
      if (arr[i] > maxSum) {
         maxSum = arr[i];
         start = end = i;
      }
   }
   return maxSum;
}

int main()
{
    fastIO;
    ll n,m,i,j;
    cin>>n>>m;
    ll a[n][m];
    int cnt=0;
    int ss=0;
    FOR(i,n){
        FOR(j,m)
        {
            cin>>a[i][j];
            ss+=a[i][j];
            if(a[i][j]<0)cnt++;
        }
    }
    ll maxSum = INT_MIN, endLeft, endRight, endTop, endBottom;

   ll left, right;
   ll temp[n], sum, start, end;

   for (left = 0; left < m; left++) {
      for(ll i = 0; i<n; i++)
         temp[i] = 0;

      for (right = left; right < m; ++right) {
         for (ll i = 0; i < n; ++i)
            temp[i] += a[i][right];
         sum = kadaneAlgo(temp, start, end, n);

         if (sum > maxSum) {
            maxSum = sum;
            endLeft = left;
            endRight = right;
            endTop = start;
            endBottom = end;
         }
      }
   }
   if(cnt=n*m){
    cout<<0<<endl<<abs(ss)<<endl;

   }
   else{

    if(maxSum<0)maxSum=0;
   cout << maxSum<<"\n";
   for(ll i=endTop;i<=endBottom;i++){
    for(ll j=endLeft;j<=endRight;j++){
        if(a[i][j]<0){
            maxSum+=abs(a[i][j]);
        }
    }
   }
   cout<<maxSum<<"\n";
   }

}
