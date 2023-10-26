//PRAC 15 NUM
//CODEFORCE PRAC 15



#include<bits/stdc++.h>
using namespace std;
using ll = long long;
void solve(){
   int w,h,n;
   cin>>w>>h>>n;
   int res=1;
   while(w%2==0){
    w/=2;
    res*=2;
   }
   while(n%2==0){
    h/=2;
    res*=2;
   }
   cout<<(res>=n ? "YES\n" : "NO\n");


  }
  int main(){
   int t;
   cin>>t;
   while(t--)
    {
        solve();
    }
   }
   /*
   5
2 2 3
3 3 2
5 10 2
11 13 1
1 4 4

OUTPUT

YES
NO
YES
YES
YES
*/

//WRONG ANS
