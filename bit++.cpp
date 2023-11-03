#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    int n,value=0,i,j;
    char str[4];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&str);
        for(j=0;j<3;j++){
            if(str[j]=='+'){
                value++;
                break;
            }
            else if(str[j]=='-'){
                value--;
                break;
            }
        }
    }
    printf("%d",value);
    return 0;
}
/*
1
++X
output=1
*/
