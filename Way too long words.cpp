//Codeforce

#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  string s;
  cin>>t;
  while(t--)
    {
        cin>>s;
        if(s.length()>10){
            cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
        }

    else{
        cout<<s<<endl;
    }
    }
    return 0;
  }
/*
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

OUTPUT---
word
l10n
i18n
p43s
*/
