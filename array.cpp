#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=15;
    int a=1;
    int s=2;
    //int a[n];
    //for(int i=0;i<n;i++)
        //cin>>a[i];
    //}
    cout<<1<<" ";
    for(int i=1;i<=n;i++){
        int y= a* pow(s,i);
        cout<<y<<" ";
    }
    cout<<endl;
    return 0;
}

//geometric array print
//output
//1 2 4 8 16 32 64 128 256 512 1024 2048 4096 8192 16384 32768
