#include <bits/stdc++.h>
using namespace std;

int main() { 

	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
			{cin>>a[i];b[i]=a[i];}
		sort(a,a+n);

		if(a[n-1]-a[0]<n)
			cout<<"NO"<<endl;

		else
		{
			cout<<"YES"<<endl;
			int pos1,pos2;
			for(int i=0;i<n;i++)
			{
				if(a[0]==b[i])
					pos1=i;
				if(a[n-1]==b[i])
					pos2=i;
			}

			cout<<min(pos1,pos2)<<" "<<max(pos1,pos2)<<endl;
		}
	}


	// your code goes here
	return 0;
}