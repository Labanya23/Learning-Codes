//codechef
/*
Input-
  3
3
4
6
  output--
  1
2
4
  */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll mod(ll a)
{
    return (a%mod+mod)%mod;
}
ll binpow(llx,lln){
    if(n==0){
        return 1;
    }
    if(x==0){
        return 0;
    }
    if(n%2==0){
        ll temp=binpow(x,n/2);
        return mod(temp*temp);
    }
    return mod(mod(x)*binpow(x,n-1))
}
int main(){
    ios base ::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==2){
            cout<<0<<endl;
            continue;
        }
        if(n%2==0){
            ll a=n/2;
            ll b=n/2;
            while(__gcd(a,b)!=1){
                a--;
                b++;
            }
            ll ans=(a*b)-1;
            cout<<ans<<endl;
        }
        if(n%2==1){
            ll a=n/2;
            ll b=n/2+1;
            ll ans=(a*b)-1;
            cout<<ans<<endl;
        }
    }
    return 0;
}


