#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0;
    int n,d,l,r;
    cin>>n>>d;
    for(int i=1;i<=n;i++)
    {
        cin>>r;
        if(i!=1)
        {
            if(r-d>l+d)ans+=2,l=r;
            else if(r-d==l+d)
                ans++;
            l=r;
        }
        l=r;
    }
    cout<<ans<<endl;
    return 0;
}
/*
codeforce
4 3
-3 2 9 16
output--
6
*/
