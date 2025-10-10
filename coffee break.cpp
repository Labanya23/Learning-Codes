#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h[3]={0,11,22};
        int m[3]={0,11,22};
        int hour,min;
        char colon;
        cin>>hour>>colon>>min;

        int total = hour*60+min;
        int H=0,M=0;

        bool f=false;
        for(int i=0;i<3;i++){
            int breakt=h[i]*60+m[i];
            if(breakt>=total){
                H=h[i];
                M=m[i];
                f=true;
                break;
            }

        }
        if(!f){
            H=0;
            M=0;
        }
        if(H<10) cout<<"0";
        cout<<H<< ":";
        if(M<10) cout<<"0";
        cout<<M<<endl;
    }
    return 0;
}
