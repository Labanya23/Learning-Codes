//CODEFFORCE
//PRACTICE 11 NUM code

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    /*
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n-1;i++){
	        if(i%2==0)
	        {
	            if(a[i]>a[i+1])
	            swap(a[i],a[i+1]);
	        }
	        else{
	            if(a[i]<a[i+1])
	            swap(a[i+1],a[i]);
	            
	        }
	    }
	    for(i=0;i<n;i++)
	    cout<<a[i]<<" ";
	    cout<<endl;
	 */ 
	 vector<int>arr(n);
	 for(auto & i:arr)
	 cin>>i;
	 sort(arr.begin(),arr.end());
	 int i;
	 for(i=0;i<n/2;i++){
	     cout<<arr[i]<<" "<<arr[n-i-1]<<" ";
	 }
	 if(n&1) cout<<arr[i]<<" ";
	 cout<<endl;
	}
	return 0;
}
