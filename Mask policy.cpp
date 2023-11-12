#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int s=a-b;
	    if(b<=s)
	    {
	        cout<<b<<endl;
	    }
	    else{
	        cout<<s<<endl;
	    }
	}
	return 0;
}
/*
3
2 1
3 2
3 1
output--
1
1
1
*/
