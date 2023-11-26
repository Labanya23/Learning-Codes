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
        int sum=0,q=0;
        for(int i=0;i<n;i++){
            if(s[i]=='?') q++;
            else{
                sum+=(s[i]-'0')
            }
        }
        if(s[0]=='?'){
            cout<<'1';
            for(int i=1;i<q;i++)
            cout<<'0';
        }
        else if(sum%9!=0){
            for(int i=0;i<q;i++)
            cout<<'1'
        }
        else{
            for(int i=0;i<q-1;i++)
            cout<<"1";
            cout<<"2";
        }
        cout<<endl;
    }
	// your code goes here
	return 0;
}
