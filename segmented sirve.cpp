#include <bits/stdc++.h>
using namespace std;

int main() {

  int t;
  cin>>t;
  while(t--)
  {
    long long int l,r;
    cin>>l>>r;
    long long int n=r;
    long long int a[n+1]={0};
    a[0]=1;
    a[1]=1;

    long long int limit=floor(sqrt(n));

    for(long long int i=2;i<=floor(sqrt(limit));i++)
    {
      if(a[i]==0)
      {
        for(long long int j=2*i;j<=limit;j+=i)
          a[j]=1;
      }
    }

    vector<int> Prime;
    for(int i=2;i<=limit;i++)
    {
      if(a[i]==0)
        Prime.push_back(i);
    }

    long long int low=l;
    long long int high=l+limit;

    while(low<n)
    {
      if(high>n)
        high=n;

      for(long long int i=0;i<Prime.size();i++)
      {
          for(long long int j=low;j<=high;j++)
          {
            if(j%Prime[i]==0)
            a[j]=1;
          }
      }

      low+=limit;
      high+=limit;
    }

    for(long long int i=l;i<=n;i++)
    {
      if(a[i]==0)
        cout<<i<<endl;
    }
    cout<<endl;
  }
  // your code goes here
  return 0;
}
