/*

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        bool c=0;
        for(int i=0;i<n;i++){
            if(s[i]='0')
                //cout<<"YES"<<endl;
                //break;
                //return;
                c=1;


            //else if((s[0]='1')&&(s[1]='1'))

              //cout<<"NO"<<endl;
        }
        if(c)
            cout<<"YES"<<endl;



           else
                cout<<"NO"<<endl;



    }

    return 0;
}
*/
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        bool c=0;
        int n;
        string s;
        cin>>n>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='0')
                c=1;
        }
        if(c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
