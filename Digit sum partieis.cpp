#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       /* int n,s=0;
        int a=n%10;
        s=s+a;
        n=n/10;
        
        if(s%2==0){
            cout<<n+1<<endl;
        }
        else{
            cout<<n+2<<endl;
        }
      */
      int n;
      cin>>n;
      int a=n;
      int s=0,pd=0,lp=0;
      while(n>0){
          s=n%10;
          pd=pd+s;
          n=n/10;
      }
      int jy=a+1;
      while(jy>0){
          s=n%10;
          lp=lp+s;
          n=n/10;
      }
      if((pd%2==0 && lp%10==0) || (pd%2!=0 && lp%2!=0)){
          cout<<a+1<<endl;
      }
      else{
          cout<<a+2<<endl;
      }
      
    }
    
	// your code goes here
	return 0;
}
