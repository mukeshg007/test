#include <bits/stdc++.h>
using namespace std;

long long int check(long long int a[], long long int n, long long int diff, long long int c)
{
  long long int count=1,pos=0;
  for(long long int i=1;i<n;i++)
  {
    if(a[i]-a[pos]>=diff)
    {
      pos=i;
      count++;

      if(count>=c)
        return 1;
    }
  }

  return 0;
}

int main() { 

  int t;
  cin>>t;
  while(t--)
  {
    long long int n, c;
    cin>>n>>c;

    long long int a[n];
    for(long long int i=0;i<n;i++)
      cin>>a[i];

    sort(a,a+n);
        
        // BINARY SEARCH

        long long int start=0, end=n-1;
        long long int ans=0;
        while(start<end)
        {
          long long int mid=(start+end)/2;

            long long int result=check(a,n,mid,c);
            if(result==1)
            {
              if(ans<mid)
                ans=mid;
              start=mid+1;
            }
            else
            {
              end=mid-1;
            }
        }

        cout<<ans<<endl;
  }
  // your code goes here
  return 0;
      }
