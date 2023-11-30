#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,c=0;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
        cin>>a[n];
        }
        //sort(a.begin(),a.end());
        reverse(a.begin(),a.end());
        c++;
        if(c<=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
