#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int binarySearch(int *arr, int n, int num)
{
    int start=0,end=n-1;
    int mid;
    while(start<=end) {
        mid=start+(end-start)/2;
        if(arr[mid]==num){
            return mid;
        }
        else if(arr[mid]<num){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
    int sol=binarySearch(arr,n,num);
    cout<<sol<<"\n";
    return 0;
    
}
