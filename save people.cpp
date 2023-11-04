#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long row,col;
        cin>>row>>col;
        long long x,y;
        cin>>x>>y;
        long long area=row*col;
        vector<long long>a(4);
        a[0]=row*y;
        a[1]=x*col;
        a[2]=col*(row-x+1);
        a[3]=row*(col-y+1);
        sort(a.begin(),a.end());
        long long ans=(area-a[0]);
        cout<<ans<<endl;
    }
    
	// your code goes here
	return 0;
}
/*
2
3 3
1 2
3 2
1 1
output--
6
4
*/
