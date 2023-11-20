#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	    cout<<(n-1)*4-abs(x-y)-abs(n+1-(x+y))<<endl;
	}
	return 0;
}
/*5
1 1 1
3 2 2
3 2 1
2 2 2
150 62 41

output--
0
8
6
3
527
*/
