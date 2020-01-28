#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n+1],b[10001] {0};
        for(long long int i=1;i<=n;i++)
        {
            cin>>a[i];
            b[a[i]]=i;
        }
        long long int sum=n,pos=n;
        
        for(long long int i=1;i<10001;i++)
        {
            
            if(pos<=1)
            break;
            
            if(b[i]==0 || b[i]>pos)
            sum+=pos;
            
            else
            {
                pos=b[i]-1;
                sum+=pos;
            }
            
            
        }
        
        cout<<sum<<endl;
        
    }
	// your code goes here
	return 0;
}
