#include<bits/stdc++.h>
using namespace std;
int main(){
   // bool c=0;
    int i,n;
    int d=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n-2;i++){
        if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x')
            d++;


    }
    cout<<d<<endl;
    //else cout<<"0"<<endl

    return 0;

}
