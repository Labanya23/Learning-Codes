#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int count=0;
        for(int i=0;i<a.length();i++){
        if(a[i]=='A'|| a[i]=='D' || a[i]=='O' || a[i]=='P' || a[i]=='R'){
            count+=1;
        }
        else if(a[i]=='B'){
            count+=2;
        }
        }
        cout<<count<<endl;
        
        
    }
	// your code goes here
	return 0;
}
/*
2
CODECHEF
DRINKEATCODE
output--
2
5
*/
