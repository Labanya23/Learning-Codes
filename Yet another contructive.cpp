#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if(n==1)
	    cout<<0<<" "<<1<<" "<<3<<endl;
	    else if(n%2==1)
	    cout<<1<<" "<<n<<" "<<n-1<<endl;
	    else
	    cout<<0<<" "<<n<<" "<<n+1<<endl;
	}
	return 0;
}
/*
4
3
2
13
100000000
  OUTPUT--
  1 2 3
2 3 4
6 9 13
23570468 129811858 80835401

  #include<bits/stdc++.h>
  using namespace std;
int main(){
  int t;
cin>>t;
while(t--)//for(t;t>=1;t--)
{
int x;
cin>>x;
int a=0,b=0,c=0;
int j=log2(x);
a=pow(2,j+1)+x;
b=x;
c=x-pow(2,j);
  cout<<a<<" "<<b<<" "<<c<<"\n";
}
return 0;
}
*/
