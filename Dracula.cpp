#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    n+=5;
	    cout<<floor(n*1.0/7)<<endl;
	}
	return 0;
}
/*
4
1
10
15
16

output-
0
2
2
3
*/
