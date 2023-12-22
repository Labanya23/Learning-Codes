#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        vector<long long int>a(n),b(n);
        for(i=0;i<n;i++)
            cin>>a[i];
        for( i=0;i<n;i++){
            cin>>b[i];
            if(b[i]<a[i])
                swap(a[i],b[i]);
        }
        int x=*max_element(a.begin(),a.end());
        int y=*max_element(b.begin(),b.end());
        cout<<x*y<<endl;
    }
    return 0;
}
