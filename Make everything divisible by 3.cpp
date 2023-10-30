#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base ::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>fruits(N);
        for(int&fruit:fruits){
            cin>>fruit;
            fruit%=3;
        }
        int x=count(fruits:begin(),fruits.end(),1);
        int y=count(fruits.begin(),fruits.end(),2);
        if(x>y) swap(x,y);
        int ans=0;
        while(y>=x+3){
            ans+=1;
            x+=2;
            y-=2;
        }
        if(x>y) swap(x,y)
        if(y=x+1){
            if(x>0) ans+=2;
            else ans+=6;
        }
        if(y==x+2){
            if(x>1 || (x>0 && x+y<n))
            ans++=4;
            else ans+=5;
        }
        cout<<ans<<endl;
    }
    return 0;
}

/*
CODECHEF
2
4
4 8 20 16
4
4 3 6 9
output--
2
6
*/
