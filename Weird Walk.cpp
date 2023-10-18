//CODECHEF
//PRACTICE 6 num


#include <iostream>

#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int a[x],b[x];
        for(int i=0;i<x;i++){
            cin>>a[i];
        }
        for(int i=0;i<x;i++){
            cin>>b[i];
        }
        int p=0,l=0,ans=0;
        for(int i=0;i<x;i++){
            if(a[i]==b[i] and p==l)
            {
                ans+=a[i];
            }
            else{
                p+=a[i];
                l+=b[i];
            }
        }
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
/*
3
4
1 3 3 4
1 2 4 4
2
2 3
3 2
2
3 3
3 3
output
  5
0
6
*/
