#include <bits/stdc++.h>
using namespace std;

int main(){

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

			sort(a,a+n);

			for(int i=0;i<n-1;i++)
			{
				while(a[i]>k)
				{
					a[i]--;
					a[i+1]--;
				}
			}

            int sum=0;
			for(int i=0;i<n;i++)
			{
				sum+=a[i];
			}

			cout<<sum<<endl;

		}
		return 0;
}