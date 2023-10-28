//CODEFORCE
//PRAC 19 NUM



#include<bits/stdc++.h>
using namespace std;
int main(){

  int n;
  string s;
  cin>>n>>s;
  int count1=0,count2=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='A'){
        count1++;
    }
    else if(s[i]=='D'){
        count2++;
    }
  }
  if(count1>count2){
    cout<<"Anton"<<endl;
  }
  else if(count2>count1){
    cout<<"Danik"<<endl;
  }
  else if(count1==count2){
    cout<<"Friendship"<<endl;
  }
    return 0;
  }
