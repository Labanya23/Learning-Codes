#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,d,h;
        cin>>n>>d>>h;
        int flag=0;
        int wl =0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x>0){
                wl+=x;
            }
            else{
                wl-=d;
            }
            if(wl<0)
            wl=0;
            
        }
        if(wl>h)
        flag=1;
    }
    if(flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
	// your code goes here
	return 0;
}
/*
4
4 2 6
1 3 0 2
2 1 100
1 100
4 2 3
1 2 0 2
3 7 10
5 3 9 

OUTPUT

NO
YES
NO
YES
*/
