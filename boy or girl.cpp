#include<bits/stdc++.h>
using namespace std;
int main()
{
    string u;
    cin>>u;
    int c =0;
    for(int i=0;i<u.length()-1;i++)
    {
        for(int j=0;j<u.length();j++)
        {
            if(u[i]==u[j])
            {
                c++;
                break;
            }
        }
        int r = u.length()-count;
        if(r%2==0)
        {
            cout<<"CHAT WITH HER"<<endl;
        }
        else
        {
            cout<<"IGNORE HIM!"<<endl;
        }

    }
    return 0;
}
