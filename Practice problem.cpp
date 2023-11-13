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
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                c++;
            }
        }
        if(c>=2 && c%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	
	return 0;
}
/*
4
4
1 1 2 2
6
1 2 4 6 8 10
2
3 5
3
1 3 5

output-
YES
NO
YES
NO
*/
