#include<bits/stdc++.h>
using namespace std;
int main(){
      int t;
      cin>>t;
      while(t--){
            /*
        int a,b,c,d,co;
        cin>>a>>b>>c>>d;
        if(a<b || a<c || a<d){
            co++;
        }
        cout<<co<<endl;
      }
      INPUT-
      4
2 3 4 1
10000 0 1 2
500 600 400 300
0 9999 10000 9998

OUTPUT-
2
0
1
3
*/

      int a[5];
      int c=0;
      cin>>a[0];
      for(int i=1;i<4;i++){
        cin>>a[i];
        if(a[0]<a[i]){
            c++;
        }
      }
        cout<<c<<endl;
      }

      return 0;

}
