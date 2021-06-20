/*Find the duplicate number without distorting the array*/
//Optimal Solution:O(n) Auxilary Space: O(1)
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int duplicate_number(vector<int> &v,int n)
{
    int fast_ptr=v[0];
    int slow_ptr=v[0];
    do{
        slow_ptr=v[slow_ptr];
        fast_ptr=v[v[fast_ptr]];//Twice the slow one
    }while(slow_ptr!=fast_ptr);
    //reinitialize the fast ptr to the start of the array for finding the duplicate number.
    fast_ptr=v[0];
    while(slow_ptr!=fast_ptr)
    {
        slow_ptr=v[slow_ptr];
        fast_ptr=v[fast_ptr];
    }
    return slow_ptr;//returns the duplicate number.
}
int main()
{
    int n,a;
    vector<int> v;
    cout<<"Enter the number of elements\n";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int x=duplicate_number(v,n);
    cout<<x<<endl;
}
