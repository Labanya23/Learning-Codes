//CODECHEF
//PRAC CODE 13

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,lucky_bob,lucky_alice;
        cin>>n>>lucky_bob>>lucky_alice;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count_bob=0,count_alice=0;
        for(int i=0;i<n;i++){
            if(arr[i]%lucky_bob==0){///
                count_bob++;
            }
            else if(arr[i]%lucky_alice==0){
                count_alice++;
            }
            
        }
        if(count_bob>count_alice){
            cout<<"BOB"<<endl;
        }
        else{
            cout<<"ALICE"<<endl;
        }
    }
	// your code goes here
	return 0;
}
/*
int n,a,b;
cin>>n>>a>>b;
long long int counta=0;
long long int countb=0;
vector<long long int>v(n);
for(int i=0;i<n;i++)
{
cin>>v[i];
}
for(int i=0;i<n;i++)
{
long long int d=(1)*a;
long long int e=v[i];
if((e%d)==0)
{
counta++;
v.pop_back();
}
else{
long long int f=(1)*b;
if(e%f==0){
countb++;
v.pop_back();
}
}
}
if(counta>countb){
  cout<<"BOB"<<endl;
}
else{
cout<<"ALICE"<<endl;
}
return 0;
}

2
5 3 2
1 2 3 4 5
5 2 4
1 2 3 4 5

  OUTPUT
  ALICE
BOB
  */

  
