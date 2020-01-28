#include<bits/stdc++.h>
using namespace std;
int main(){

	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a[n];
		int b[n];

		for( int i = 0 ; i < n ; i++ )
		{
			cin>>a[i]>>b[i];
		}

		set <string> c;
		for( int i = 0 ; i < n ; i++ )
			c.insert(a[i]);

		int num = c.size();
		int one[num],zero[num];

		for( int i = 0 ; i < num ; i++ )
		{
			for( int j = 0 ; j < n ; j++ )
			{
				if( c[i] == a[j] )
				{
					if( b[j] )
						one[i]++;
					else
						zero[i]++;
				}
			}
		}
        
        int sum=0;
		for( int i = 0 ; i < num ; i++ )
		{
			sum+ = max(one[i],zero[i]);
		}
		cout<<sum<<endl;
	}
	return 0;
}