//CODEFORCE
//PRAC NUM 20



#include<bits/stdc++.h>
using namespace std;
int main(){

  string n;
  cin>>n;
  int count1=0;
  for(int i=0;i<n.size();i++){
    if(n[i]=='7' || n[i]=='4'){
        count1++;
    }
  }
   if(count1==7 || count1==4){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }
   return 0;
  }
  /*
  40047
   output-no
   7747774
 output-yes
 */
