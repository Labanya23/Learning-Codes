#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int i;
    string s;
    while(cin>>s)
    {
        for(i=0;i<s.size();i++){
            if(s[i]=='A'|| s[i]=='I' || s[i]=='O' || s[i]=='E' || s[i]=='U'||s[i]=='Y'|| s[i]=='a' || s[i]=='i' || s[i]=='o'|| s[i]=='e'|| s[i]=='u'|| s[i]=='y')
                continue;
            if(s[i]>='A' && s[i]<='Z')
                s[i]=tolower(s[i]);
            cout<<"."<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
