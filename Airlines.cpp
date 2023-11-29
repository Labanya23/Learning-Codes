#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,n;
        cin>>x>>n;
       /* int a=ceil(n/100);
       // int b=ceil(a);
        if(a<x){
            cout<<"0"<<endl;
        }
        else{
            cout<<(a-x)<<endl;
     */
     if(n%100!=0)
         n=n+100;
         int m=n/100;
         cout<<max(0,m-x)<<endl;
     
    }
	// your code goes here
	return 0;
	
}
/*
3
4 600
3 523
8 245

output
2
3
0
*/
