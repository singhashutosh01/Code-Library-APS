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
int getSum(int BITree[], int index)
{
    int sum = 0;
    while (index > 0) {
        sum += BITree[index];
        index -= index & (-index);
    }
    return sum;
}

void updateBIT(int BITree[], int n, int index, int val)
{
    while (index <= n) {
        BITree[index] += val;
        index += index & (-index);
    }
}

void convert(int arr[], int n)
{
    int temp[n];
    for (int i = 0; i < n; i++)
        temp[i] = arr[i];
    sort(temp, temp + n);
    for (int i = 0; i < n; i++) {
        arr[i] = lower_bound(temp, temp + n, arr[i]) - temp + 1;
    }
}
int findElements(int arr[], int n)
{
    convert(arr, n);
    int BIT[n + 1];
    for (int i = 1; i <= n; i++)
        BIT[i] = 0;
    int smaller_right[n], greater_left[n];
    for (int i = n - 1; i >= 0; i--) {
        smaller_right[i] = getSum(BIT, arr[i] - 1);
        updateBIT(BIT, n, arr[i], 1);
    }
    int sum1=0;
    for (int i = 0; i < n; i++)
        sum1+=smaller_right[i];
return sum1;
}
int main()
{
    fastIO;
    int t,i,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n+1];
        FOR(i,n){
            cin>>a[i];
        }
    int ans=findElements(a,n);
        if(ans>=n){
            cout<<ans<<"\n"<<"YES\n";
        }
        else{
            cout<<ans<<"\n"<<"NO\n";
        }
    }


}

