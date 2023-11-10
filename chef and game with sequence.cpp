#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int c1=0,c2=0;
	    for(int i=0;i<n;i++){
	        if(a[i]%2==0) c1++;
	        else c2++;
	    }
	    if(c2%2==0 || n==1) cout<<"1"<<endl;
	   else
	    cout<<"2"<<endl;
	}
	return 0;
}
/*
2
2
1 2
5
7 4 3 2 6

output--
2
1
*/
