#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    int mx=0;
    ll ans =0;
    //int a[n];;;;;here need previous element large ;so that why in here
                //loop goes 5 time and check element compare to mx
                //first int here(3,0)3 is max so why it ma now..then again
                //compare 2 time in here need to increase the last value
                //it s happen 2 time max=1(mx)=mx-x==7-2=5;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mx=max(x,mx);
        ans+=mx-x;
    }
    cout<<ans;
    return 0;
}
