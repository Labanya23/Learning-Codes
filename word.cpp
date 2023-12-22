#include<bits/stdc++.h>
using namespace std;
int main()
{

    int upper=0,lower=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i])){
            upper++;
        }
        else{
            lower++;
        }
    }
    if(lower>upper){
        for(int i=0;i<s.size();i++){
            s[i]=tolower(s[i]);
    }
}
if(upper>lower){
    for(int i=0;i<s.size();i++){
        s[i]=toupper(s[i]);
    }
}
if(lower==upper)
{
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }
}
cout<<s<<endl;
return 0;
}
