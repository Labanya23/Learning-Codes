#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        if(n<k)
        {
            cout<<n/2<<endl;
            continue;
        }
        int remainder =n%k;
        int n1= remainder +1;
        int n2=k-1;
        int diff=n2-n1;
        n1=n2+diff/2;
        n2=n2+diff-diff/2;
        if(n1>k)cout<<n1<<endl;
        else
        cout<<remainder/2<<endl;
    }
	// your code goes here
	return 0;
}
/*
3
5 2
4 7
8 3
  output--
  0
  2
  4
  */
