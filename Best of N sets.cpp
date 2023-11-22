#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,n,a,b,c;
        cin>>x>>y;
        
        if(y>x)
        {
            n=2*y-1;
            
          
        
            //a=y+1;
            //b=a-x;
           // c=a+b;
           // n=c-1;
           
        }
        else{
            //a=x+y;
            //b=a+x;
            n=2*x-1;
        }
        cout<<n<<endl;
    }
	// your code goes here
	return 0;
}
/*n=2*(max(x,y))x-1
/*
4
2 5
8 10
99 1
4 8
output-
9
19
197
15
*/
