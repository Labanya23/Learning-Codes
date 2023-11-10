#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0;
        cin>>n;
        int a[n] ;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(s%2==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
	// your code goes here
	return 0;
}
/*
1  
2  
5 2

output-
YES
*/
