/*#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    
	    int n,i,m,c=0,b=0;
	    cin>>n>>m;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    if(a[i]%m==1){
	        c++;
	   
	    }
	    else{
	        b++;
	        
	    }
	    if(c>b){
	        cout<<c<<endl;
	    }
	    else{
	        cout<<b<<endl;
	    }
	    2
5 2
5 7 13 4 6
4 3
2 6 7 4
output--
3
2

	   
	  int n,k;
	  cin>>n>>k;
	  vector<int>v(n);
	  int ans=0;
	  for(int i=0;i<n;i++)
	  {
	      cin>>v[i];
	  }
	  int odd=0;
	  for(int i=0;i<k;i++)
	  {
	      if(v[i]%2!=0){
	          odd++;
	      }
	  }
	  if(odd!=0){
	      ans++;
	  }
	  for(int i=k;i<n;i++)
	  {
	      if(v[i-k]%2!=0){
	          odd++;
	      }
	      if(odd>0)
	      {
	          ans++;
	      }
	  }
	  cout<<ans<<endl;
	    
	}
	return 0;
}
2
5 2
5 7 13 4 6
4 3
2 6 7 4

output--
3
2
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int i=0,j=k;
        int cnt=0;
        while(j<=n)
        {
            int f=0;
            for(int k=i;k<j;k++)
            {
                if(a[k]%2!=0)
                {
                    f=1;
                    break;
                }
            }
            i++;
            j++;
            if(f==1)
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
