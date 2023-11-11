#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        int c=0;
        while(a)
        {
            a=floor(a/b);
            c++;
        }
        cout<<c<<endl;
    }
	// your code goes here
	return 0;
}
/*
3
5 3
6 7
10 2

OUTPUT-
2
1
4
*/
