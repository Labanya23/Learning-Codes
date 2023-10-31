#include<bits/stdc++.h>
using namespace std;
int main()
{
   /* int t;
    cin>>t;
    while(t--)
    {

        int i,n;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        //sort(a[i].begin(),a[i],end);
        for(i=0;i<n;i++){
        if(a[i]-a[i+1]>0){
            cout<<"YES"<<endl;
            continue;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    }
    8
5
1 2 3 4 5
5
6 5 3 4 4
9
6 5 5 7 5 6 6 8 7
4
4 3 2 1
6
2 2 4 5 3 2
8
1 3 17 19 27 57 179 13
5
3 17 57 179 92
10
1 2 3 4 0 6 7 8 9 10

output:
YES
YES
YES
NO
NO
NO
YES
YES

    */
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        for(int i=0;i<=n;i++){
            cin>>a[i];

        }
        bool flag=true;
        for(int i=1;i<n;i++){
            if(a[i]>a[i+1] && i!=1 && i!=2 && i!=4 && i!=8 && i!=16){
                flag=false;
            }
        }
        cout<<(flag?"YES":"NO")<<"\n";
    }
    return 0;
}
