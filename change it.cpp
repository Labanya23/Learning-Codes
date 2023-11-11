#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=0,s=0;
        for(int i=0;i<n;i++)
        {
            for( int j=i;j<n;j++)
            {
                if(a[i]==a[j]) c++;
                
            }
            s=max(s,c);
            c=0;
        }
        cout<<n-s<<endl;
    }
	// your code goes here
	return 0;
}
/*
3
5
1 1 1 1 1
4
9 8 1 8
2
1 9
output-
0
1
2
*/
