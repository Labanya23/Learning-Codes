//CODEFORCE
//PRAC 18 NUM

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,a,b,s=0,m=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b;
        s=s-a;
        s=s+b;
        if(s>m){
            m=s;
        }
    }
    cout<<m<<endl;
    return 0;


  }
  /*
  4
0 3
2 5
4 2
4 0

OUTPUT
6
*/
