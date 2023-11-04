#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll p,q;
        cin>>p>>q;
        vector<ll>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        ll res=arr[n-1]-arr[0];
        ll ops=p+q;
        if(p==0 && q==0)
        {
            cout<<res<<endl;
        }
        else
        {
            for(int i=1;i<n-1;i++){
                arr[i]=abs(arr[i]);
            }
            sort(arr.begin()+1,arr.end()-1);
            for(int i=n-2;i>0;i--)
            {
                if(ops==0){
                    break;
                }
                else
                {
                    res+=arr[i];
                    ops--;
                }
                
            }
            cout<<res<<endl;
        }
        
    }
	// your code goes here
	return 0;
}
/* 
codechef
3
2
0 0
5 1
6
1 2
8 -1 -4 2 6 -3
7
6 6
-2 -4 2 -2 -3 -1 -1

output---
4
23
15
*/
