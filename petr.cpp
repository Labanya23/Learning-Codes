#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[7];
    cin>>n;
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    int r=0;
    while(n>0){
        for(int i=0;i<7;i++)
        {
            n=n-a[i];
            if(n<=0){
                r=i+1;
                break;
            }
        }
    }
    cout<<r<<endl;
    return 0;
}
