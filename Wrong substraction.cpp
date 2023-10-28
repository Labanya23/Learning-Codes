//CODEFORCE 33 NUM PRAC

/*
In here input 512 and 4
the program runs 4 time
one time its not divisble by 10 that it 511
sencond time also =510
third time divide 51
4th time not 50 output

512 4
output
50
*/
#include<bits/stdc++.h>
using namespace std;
int main(){

  long int n,k,num;
  int i;
  cin>>n>>k;
  for(i=1;i<=k;i++){
    num=n%10;
    if(num==0){
        n=n/10;
    }
    else{
        n=n-1;
    }
  }
  cout<<n<<endl;
  return 0;
}



