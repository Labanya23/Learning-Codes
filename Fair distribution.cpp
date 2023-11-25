#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag=true;
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='1') count--;
            else count++;
            if(count<-1 || count>1){
            flag=false;
            cout<<"NO"<<endl;
            break;
            }
            
        }
        if(flag) cout<<"YES"<<endl;
    }
	// your code goes here
	return 0;
}
/*
6
1
1
2
00
4
1010
4
1100
6
010101
5
00001

output--
YES
NO
YES
NO
YES
NO
*/
