//CODEFORC
//NUM 1 CODE PRACTICE

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    scanf("%d %d %*c",&n,&m);
    char str[n+1];//FOR NULL CHARACTER
    scanf("%s",str);
    int l,r;
    char c1,c2;
    while(m--){
        scanf("%d %d %c %c",&l,&r,&c1,&c2);
        for(int i=l-2;i<r;i++){
            if(str[i]==c1){ //I=I
                str[i]=c2;//noi
            }
        }
    }
    printf("%s\n",str);
    return 0;
}
