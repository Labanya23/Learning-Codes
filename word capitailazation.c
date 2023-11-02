#include<stdio.h>
int main()
{
    char name[100];
    scanf("%s",&name);
    char c;
    for(int i=0;i<strlen(name);i++){
        if(i==0)
        {
            if((name[i]>='a' && name[i]<='z'))
                name[i]=name[i]-32;
            continue;
        }
    }
    printf("%s",name);
    return 0;
}
/*codeforce
ApPLe
output-apple
konjac
output-Konjac
*/
