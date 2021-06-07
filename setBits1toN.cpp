#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	//count set bits from 1 to n in O(n)
	vector<int> sol(n+1,0);
	
	for(int i=1;i<=n;i++){
	    sol[i]=sol[i>>1]+(i&1);
	}
	for(auto i:sol){
	    cout<<i<<" ";
	}
	cout<<"\n";
	return 0;
}
