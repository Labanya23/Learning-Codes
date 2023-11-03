#include <bits/stdc++.h>
#define ll long long
const int m=1e9+7;

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,total=0;
        vector<int>a;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            total+=x;
            a.push_back(x);
        }
        if(total%n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            bool flag=true;
            int z=total/n;
            for(int i=0;i<n;i++)
            {
                if(abs(a[i]-z)%2){
                    flag=false;
                }
            }
            (flag)? cout<<"YES\n": cout<<"NO\n";
        }
    }
	// your code goes here
	return 0;
}
/*
3
2
4 4
3
2 4 12
2
4 6
OUTPUT--
Yes
Yes
No
*/
