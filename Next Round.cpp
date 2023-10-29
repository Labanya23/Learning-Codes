#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,a[50],sum=0;
    cin>>n>>k;
    for( i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>=a[k-1] && a[i]>0){
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}
//CODEFORCE
/*
8 5
10 9 8 7 7 7 5 5
OUTPUT--6
4 2
0 0 0 0
OUTPUT-0
*/
