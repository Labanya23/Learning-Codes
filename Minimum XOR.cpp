#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=0;
        for(i=0;i<n;i++){
            c^=a[i];
        }
        int d=c,p;
        for(i=0;i<n;i++)
        {
            p=c^a[i];
            d=min(d,p);
        }
        cout<<d<<endl;
    }
	// your code goes here
	return 0;
}
/*
3
4
2 4 3 6
2
4 4
5
1 3 5 17 9

output-
0
0
14*/
