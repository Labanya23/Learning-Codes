//CODEFORCE
//PRAC 16 NUM
#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
  int t;
  cin>>t;
  while(t--)
    {
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int i=10,ans=0;
        bool flag=false;
        while(i--){
            if(n>=m && x.find(s)!=string::npos){
            flag=true;
        break;
    }

    ans++;
    x+=x;
    n+=n;
  }
  cout<<(flag?ans:-1)<<'\n';
}
return 0;
}
/*
12
1 5
a
aaaaa
5 5
eforc
force
2 5
ab
ababa
3 5
aba
ababa
4 3
babb
bbb
5 1
aaaaa
a
4 2
aabb
ba
2 8
bk
kbkbkbkb
12 2
fjdgmujlcont
tf
2 2
aa
aa
3 5
abb
babba
1 19
m
mmmmmmmmmmmmmmmmmmm


OUTPUT
3
1
2
-1
1
0
1
3
1
0
2
5
*/

