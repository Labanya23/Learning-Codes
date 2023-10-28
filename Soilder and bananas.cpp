//17 NUM PRAC
//CODEFORCE

#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k,w,b,i,s=0;
   cin>>k>>n>>w;
   for(i=0;i<=w;i++){
    s=s+(k*i);
   }
   b=abs(s-n);
   if(s==n || s<n){
    cout<<"0"<<endl;
   }
   else{
    cout<<b<<endl;
   }
   return 0;

   }
//3 17 4
//output-13
