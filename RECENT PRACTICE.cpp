#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        string b;
        cin>>b;
        int c1=0,c2=0;
        for(int i=0;i<n;i++)
        {
            if((a[i]=='R' && b[i]=='P') ||
            (a[i]=='S' && b[i]=='R')||
            (a[i]=='P' && b[i]=='S')){
            c2++;
        }
        else if ((a[i]=='R' && b[i]=='S') ||
        (a[i]=='P' && b[i]=='R')||
        (a[i]=='S' && b[i] == 'P'))
        {
            c1++;
        }
    }
    int num=0;
    if(c2>c1)
    {
        num=((c1+c2)/2)+1;
        cout<<num-c1<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    }
	// your code goes here
	return 0;
}
/*
3
3
RRR
SPP
2
RP
SP
3
PSP
SRP
OUTPUT--
  1
  0
  2
  */
