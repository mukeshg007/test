#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,s;
		cin>>n>>s>>k;
		long long int a[k],ans=0,c=0,d=0;
		for(long long int i=0;i<k;i++)
			cin>>a[i];

		for(long long int i=1;i<n;i++)
		{
			c=0;
			d=0;
			for(long long int j=0;j<k;j++)
			{
				if(s+i==a[j] && s+i<=n)
				{
					c=1;
				}
				if(s-i==a[j] && s-i>0)
				{
					d=1;
				}
			}
            
            
			if(c==0 && s+i<=n)
			{
				ans=i;
				break;
			}
			if(d==0 && s-i>0)
			{
			    ans=i;
			    break;
			}
		}

		cout<<ans<<endl;
	}
	// your code goes here
	return 0;
    	}
