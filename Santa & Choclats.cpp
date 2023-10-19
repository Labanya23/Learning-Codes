//CODECHEF
//PRACTICE 9

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,i,sum=0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        
        }
        for(int i=0;i<n;i++){
            sum=sum+a[i];
        }
        if(n>sum)
        cout<<"NO"<<endl;
        
        else if(k==0 &&sum%n!=0)
            cout<<"NO"<<endl;
        
        
        
        else
            cout<<"YES"<<endl;
        
    }
	// your code goes here
	return 0;
}
/*
3
5 2
7 0 1 4 2
4 100
1 0 2 0
4 3
1 1 0 2

OUTPUT
YES
NO
YES
*/
