#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false),
    cin.tie(NULL),cout.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        pair<int,int>a[n+2];
        for(int i=1;i<=n;i++){
            cin>>a[i].first;
            a[i].second=i;
        }
        sort(a+1,a+n+1);
        int j=1,ans[n+2];
        long long int pref[n+2]={0};
        for(int i=1;i<=n;i++){
            pref[i]=pref[i-1]+a[i].first;
            long long int sum=pref[i];
            j=max(j,i+1);
            while(j<=n && sum>=a[j].first){
                sum+=a[j].first;
                j++;
            }
            ans[a[i].second]=j-2;
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<"\n"[i==n];
        }
        return 0;

    }
}
