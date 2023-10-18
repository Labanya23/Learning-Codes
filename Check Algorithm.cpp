//CODECHEF
//PRACTICE 7 NUM

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s,p;
        cin>>s;
        int x=s.size();
        s.push_back('A');
        int count=1;
        for(int i=1;i<=x;i++){
            if(s[i-1]==s[i]){
                count++;
            }
            else{
                p+=s[i];
                p+=to_string(count);
                count=1;
            }
            
        }
        int y=p.size();
        if(x>y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
string str;
int c=1;
int s=0;
string temp=" ";
for(int i=0;i<str.size()-1;i++){
if(str[i]==str[i+1])
c++;
else
{
temp-to_string(c);
s=s+temp size();
s++;
c=1;
}
}
temp=to_string(c);
s=s+temp.size();s++;
if(s<str.size())
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
cout<<endl;
return 0;
}
*/
}
