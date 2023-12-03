#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       // int n,x,k;
        //cin>>n>>x>>k;
        /*
        int a=n-x;
        int b=a%k;
        int c=x%k;
        if(a>=k && x>=k){
        cout<<min(b,c)<<endl;
        }
        else{
            cout<<max(b,c)<<endl;
        }
        */
       int n,b,k,g;
       cin>>n>>b>>k;
       g=n-b;
       int r_b=b%k;
       int r_g=g%k;
       int pd=(abs(r_b-r_g));
       cout<<pd<<endl;
       
    }
	// your code goes here
	return 0;
}
/*
3
12 4 3
15 10 5
8 8 3

output-
1
0
2
*/
