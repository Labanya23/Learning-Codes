//CODECHEF
/*
3
2
3
4
OUTPUT--
2 1
3 1 2
4 2 3 1
BUT THE OUTPUT COME 
2 1 
3 2 1 
4 3 2 1 
*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    while(n){
	        cout<<n<<" ";
	        n--;
	    }
	    cout<<endl;
	}
	return 0;
}
