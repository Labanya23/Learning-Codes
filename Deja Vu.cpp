#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;

        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int x[q],c[32]={0};
        vector<int>v;

        for(int i=0;i<q;i++)
        {
            cin>>x[i];
            if(c[x[i]]==0){
                v.push_back(x[i]);
            }
            c[x[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<v.size();j++)
            {
                long long int t=(1<<v[j]);
                if(a[i]%t==0){
                    t=(1<<(v[j]-1));
                    a[i]+=t;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<' ';
        }
        cout<<'\n';
    }
    return 0;
}
/*CODEFORCE
4
5 3
1 2 3 4 4
2 3 4
7 3
7 8 12 36 48 6 3
10 4 2
5 4
2 2 2 2 2
1 1 1 1
5 5
1 2 4 8 16
5 2 3 4 1

OUTPUT--
1 2 3 6 6
7 10 14 38 58 6 3
3 3 3 3 3
1 3 7 11 19
*/
