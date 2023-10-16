//code chef
//NUM 2 PRACTICE

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int f=0,p=0,ls=0;
        bool flag=false;
        for(int i=0;i<p;i++){
            cin>>a[i];
            if(a[i]==10)
            p++;
            else if(a[i]==5)
            f++;
            else if
            ls++;
            if(flag==true){
                if(a[i]==10){
                    if(f!=0)
                    f=-1;
                    else{
                        flag=false;
                    }
                    else if(a[i]==15){
                        if(p!=0)
                        p-=1;
                        else if(f>=2)
                        f-=2;
                        else flag=false
                    }
                }
            }
            if(flag== true)
            cout<<"YES\n";
            else
            cout<<"NO\n";
        }
    }
	// your code goes here
	return 0;
}
/*
3
2
5 10
2
10 5
2
5 15

output:
YES
NO
NO
*/
