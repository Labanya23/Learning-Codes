//codechef
//pratice 8 NUM

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int i, ans=0;
        if(s[0]=='1')ans++;
        for(int i=1;i<n;i++)
        {
            if(s[i]=='0'){
                ans++;
            }
            else{
                
                break;
            }
        }
        cout<<ans<<endl;
    }
	// your code goes here
	return 0;
}
/*
4
2
10
2
11
3
101
3
110
output
2
1
2
1
*/
