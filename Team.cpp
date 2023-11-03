#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    int s=0;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        if((a+b+c)>=2){
            s++;
        }
    }
    printf("%d\n",s);
    return 0;
}
/*codeforce
3
1 1 0
1 1 1
1 0 0
OUTPUT-
2
*/
