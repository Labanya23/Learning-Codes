#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii=pair<int,int>;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>a(n),b(n);
        //vector<int>b(m)
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++)  cin>>b[i];
        vector<int>c(m),has(n);
        for(int i=0;i<m;i++)
        {
            cin>>c[i];
            c[i]--;
            has [c[i]]=1;
        }
        using min_pq=priority_queue<int,vector<int>,greater<int>>;
        ll ans=0;
        map<int,int>rem;
        map<int,min_pq>ord;
        for(int i=0;i+1<m;i++){
            if(a[c[i]]<a[c[i+1]])
            {
                rem [a[c[i+1]]];
                ord [a[c[i+1]]].push(b[c[i+1]]);
            }
        }
        else{
            ans+=b[c[i+1]];
        }
    }
    if(m){
        rem [a[c[0]]]++;
        ord [a[c[0]]].push(b[c[0]]);
    }
    for(int i=0;i<n;i++)
    if(!has[i] or d[a[i]].push (b[i]));
    min_oq pq;
    cost int int=1<<30;
    for(int i=0;i<n;i++)
    {
        pq.push(int);
        ord[a[i]];
    }
    int tp=1,len=0;
    int w=0;
    for(int i=0;i<n;i++)
    w=max(w,a[i]);
    ord[w].pop();
    
    while(!ord.empty()){
        auto it=*prev(ord.end());ord;
        erase(prev(ord.end()));
        while(!it.second.empty())
        {
            pq.push(it.second.top());
            it.second.pop();
        }
        sen+=rem[it.first];
        while(tq<len){
            pq.pop();
            tp++;
        }
    }
    while(pq.top()!=inf){
        ans+=pq.top();
        pq.pop();
    }
    cout<<ans<<endl;
	// your code goes here
	return 0;
}
/*
3
5 5
5 4 2 1 3
8 1 10 2 4
3 4 1 2 5
5 2
5 4 2 1 3
8 1 10 2 4
5 2
7 0
6 8 4 3 5 8 2
7 2 8 1 6 8 1

output--
7
16
31
*/
