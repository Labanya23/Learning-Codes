#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,o=0,e=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==1)
            o++;
            else 
            e++;
        }
        if(e==n || o==n) cout<<0<<endl;
        else if(o%2==1) cout<<e<<endl;
        else cout<<min(e, o/2)<<endl;//2,1
        
    }
	// your code goes here
	return 0;
}
/*
CODECHEF
2
4
1 2 3 4
5
1 1 1 1 1
  OUTPUT--
  1
0
  */

