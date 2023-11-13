#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int temp;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
            //swap(a[i],a[i+1]);
            temp =a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            break;
            }
        }
    
    int c=0;
    
    for(int i=0;i<n-1;i++){
       // if(c==0){
           // cout<<"YES"<<endl;
        //}
       // else{
           // cout<<"NO"<<endl;
        //}
        if(a[i]>a[i+1]){
            c++;
        }
    }
        if(c==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
	// your code goes here
	return 0;
}
/*
3
5
3 5 7 8 9
4
1 3 2 3
3
3 2 1


output-
YES
YES
NO
*/
