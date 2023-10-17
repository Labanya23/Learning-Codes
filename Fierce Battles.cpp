//CODECHEF
//PRACTICE NUM 5


#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int x,y;
    cin>>x>>y;
    int a[101]={0},b[101]={0};
    for(int i=0;i<x;i++)
    {
        int p,l;
        cin>>p>>l;
        a[l]+=p;
    }
    for(int i=0;i<y;i++){
        int p,l;
        cin>>p>>l;
        b[l]+=p;
    }
    int sum=0;
    for(int i=0;i<101;i++)
    {
        if(a[i]<b[i]){
            sum+=(b[i]-a[i]);
        }
    }
    cout<<sum<<endl;
    }
	// your code goes here
	return 0;
}
/*
2
2 3
10 1
20 2
5 2
5 2
18 1
5 5
73 87
69 13
36 36
77 46
43 93
49 46
74 93
78 87
99 13
59 36

output
8
89
*/
/*
#include<iostream>
#include<map>
using namespace std;
int main()
{
  int t;
  cin>>t;
while(t--)
{
map<int,int>s;
map<int,int>f;
int n,m;
cin>>n>>m;
int a,b;
for(int i=0;i<n;i++)
{
cin>>a>>b;
}
if(s.find()==s.end())
  s.insert({b,a});
else{
s.find(b)->second=s.find(b)->second+a;
}
int sum=0;
for(int i=0;i<m;i++){
cin>>a>>b;
if(f.find(b)==f.end())
  f.insert({b,a});
else
{
f.find(b)->second=f.find(b)->second+a;
}
}
map<int,int>::iterator it1=s.begin();
map<int,int>::iterator it2=f.begin();
while(it 1!=s.end())
  {
if(ir->second>it1->second)
{
sum=sum+it2->second-it1->second;
}
++it1;++it2;
}
cout<<sum<<endl;
return 0;
}
*/
