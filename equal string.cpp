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
        string a,b;
        cin>>a>>b;
        set<char>s;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=b[i]) s.insert(b[i]);
        }
        cout<<s.size()<<endl;
    }
	// your code goes here
	return 0;
	
}

/*
3
2
ab
cd
3
aaa
bab
4
abcd
aaab

output--
2
1
2
*/
