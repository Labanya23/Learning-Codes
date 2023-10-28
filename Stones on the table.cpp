//CODEFORCE 31 PRAC NUM


#include<iostream>
#include<string.h>
using namespace std;
int main(){
  int n;
  string s;
  cin>>n;
  cin>>s;
  int i,c=0;
  for(i=0;i<s.size();i++){
    if(s[i]==s[i+1]){
        c++;
    }
  }

  cout<<c<<endl;
  return 0;
  }
/*
5
RRRRR
OUTPUT--
4
*/
