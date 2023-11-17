#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int a[n];
        int Max=0,Min=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            Max=max(Max,a[i]);
            Min=min(Min,a[i]);
        }
        cout<<Max-Min<<endl;
    }
}
