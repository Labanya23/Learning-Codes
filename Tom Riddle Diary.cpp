#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,i,j;
   scanf("%d",&n);
   char str[n+1][102];
   for(i=0;i<n;i++){
    scanf("%s",&str[i]);
    int c=0;
    for(j=0;j<i;j++){
        if(strcmp(str[i],str[j])==0){
            printf("YES\n");
            c=1;
            break;
        }
    }
    if(c==0)
        printf("NO\n");
   }

   return 0;

 }
/*CODEFORCE
6
tom
lucius
ginny
harry
ginny
harry

OUTPUT---
NO
NO
NO
NO
YES
YES
*/
