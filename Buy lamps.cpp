#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    cout<<((k*x)+((n-k)*min(x,y)))<<endl;
	}
	return 0;
}
/*
4
2 2 5 1
4 1 3 1
3 0 4 7
5 2 3 4

output-
10
6
12
15
*/
