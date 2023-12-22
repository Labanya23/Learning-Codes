#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char a;
    int flag=0;
    for(int i=0;i<=n*m;i++){
        cin>>a;
        if(a!='B' && a!='W' && a!='G')
            flag=1;
}
if(flag)
{
    cout<<"#Color\n"<<endl;
}
else{
    cout<<"#Black&White"<<endl;
}
return 0;
}
