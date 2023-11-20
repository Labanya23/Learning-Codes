#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    //if(a==0 && c==0 && ( b==1 || b==0))
	    int sum=a+b+c;
	    if(sum<=1)
	    {
	        cout<<"Water filling time"<<endl;
	    }
	    else{
	        cout<<"Not now"<<endl;
	    }
	}
	return 0;
}

/*
5
0 0 0
1 1 1
1 1 0
0 1 0
0 1 1
output--
Water filling time
Not now
Not now
Water filling time
Not now
*/
