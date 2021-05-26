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
#define fin(v,i) find(v.begin(),v.end(),i)-v.begin()
#define rv(v) reverse(v.begin(),v.end())
#define mod 1e9+7
#include<stack>
vv adjList[100005];

void BFS(ll n, ll e, ll src)
{
    ll visited[n+1];//Visited array for nodes
    queue<ll> q;
    vv solution;//Solution array
    memset(visited,0,sizeof(visited));
    //Making the source node as visited
    visited[src]=1;
    //Enqueue the src in queue
    q.push(src);
    while(!q.empty())
    {
        ll j=q.front();
        solution.push_back(j);//push the popped node in the solution array
        q.pop();
        //Visiting all the nodes of the popped node 
        for(ll i=0;i<adjList[j].size();i++){
            if(visited[adjList[j][i]]==0){
                //If the given node is not visited mark it as visited and Enqueue it in the queue.
                
                visited[adjList[j][i]]=1;
                q.push(adjList[j][i]);
            }
        }
    }
    for(auto itr:solution){
        cout<<itr<<" ";
        //Printing the solution vector(BFS traversal).
    }
    cout<<"\n";
    
    
}
int main()
{
    fastIO;
    ll nodes,edges,x,y;
    cin>>nodes>>edges;
    //Taking the graph input
    for(ll i=0;i<edges;i++){
        cin>>x>>y;
        adjList[x].push_back(y);//Directed Graph
    }
    ll source;
    cin>>source;//Taking the source vertex
    BFS(nodes,edges,source);
    
    return 0;
}
