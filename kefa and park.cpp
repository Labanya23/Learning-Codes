#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int>graph[N];
bool visited [N];
int a[N],m,ans;
void DFS(int v,int x)
{
    visited[v]=true;
    if(x>m)return;
    bool flag=true;
    for(auto child:graph[v]){
        if(!visited[child])
        {
            flag=false;
            DFS(child,x*a[child]+a[child]);
        }
    }
    if(flag){

        ans++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        x--;y--;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    DFS(0,a[0]);
    cout<<ans<<endl;
    return 0;

}
