//CODEFORCE
//PRAC 12  NUM CODE

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin>>t;
    while(t--){
       /* int n,a,b,c;
        cin>>n>>a>>b>>c;
        vector<ll>v;
        for(ll i=0;i<=n;i++){
            if(n%i==0){
                v.push_back(i);
                if(n%i!=i)
                v.push_back(n/i);
            }
        }
        int count=0;
        for(auto x:v){
            for(auto y:v){
                if(x<=a and y<=b){
                
                    ll xy=(x*y);
                    if(n%xy==0){
                        int z=n/xy;
                        if(z<=c){
                            count++;
                        }
                    }
                }
            }
        }
        cout<<count<<endl;
        ----------
        ll n,a,b,c;
        vector<int>divs;
        cin>>n>>a>>b>>c;
        int ans=0;
        int i;
    for( i=0;i*i<=n;i++)
    {
        if(n%i==0){
            divs.push_back(i);
            if(i!=n/i){
                divs.push_back(n/i);
            }
        }
    }
    for(auto x:divs){
        if(x<=a){
            for(auto y:divs){
                if(y<=b){
                    if(n%(1ll*x*y)==0){
                        int z=n/(x*y);
                        if(z<=c){
                            ++ans;
                        }
                    }
                }
            }
        }
    }
    cout<<ans<<'\n';
    */
    vector<int>divisor(int n){
        vector<int>v;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                v.push_back(i);
                if(i!=n/i)
                v.push_back(n/i);
            }
        }
        return v;
    }
    int main(){
        int cs=1;
        cin>>cs;
        int c,x,a,b,m,n;
        for(int j=0;j<cs;j++)
        {
            cin>>n>>a>>b>>c;
            vector<int>v.divisor(n);
            int cnt=0;
            for(auto p1:v)
            if(p1<=a)
            for(auto p2:v)
            if(p2<=b)
            if(n%(1ll*p1*p2)==0){
                int p3=n/(p1*p2);
                if(p3<=c)
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    }
	// your code goes here
	return 0;
}
/*
3
100 8 23 11
497296800 1000000 1000000 1000000
1 1 2 3
  OUTPUT

10
97800
1
*/
