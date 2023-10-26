//PRAC 17 NUM
//CODEFORCE


#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,z=0,o=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
    scanf("%d",arr[i]);
    if(arr[i]==0) z++;
    else o++;
  }
  int c1=0,c2=0;
  for(int i=0;i<n;i++){
    if(arr[i]==0) c1++;
    else c2++;
    if(z==c1 || o==c2){
        printf("%d\n",i+1);
        break;
    }
  }
  return 0;

  }
  /*
  5
0 0 1 0 0

OUTPUT
3
*/
