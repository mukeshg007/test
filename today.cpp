#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        
        int a[n]={0};
        for(int i=0;i<n;i++)
        {
            if(int(s[i])==46)
            a[i]+=0;
            
            else
            {
                int num=int(s[i])-48;
                for(int j=i-num;j<=i+num;j++)
                {
                    if(j>=0||j<n)
                    a[j]=a[j]+1;
                }
            }
        }
        
        int c=0;
        
        for(int i=0;i<n;i++)
        {
            if(a[i]>1)
            {
                c++;
                break;
            }
            else
            continue;
        }
        
        if(c==1)
        cout<<"unsafe"<<endl;
        else 
        cout<<"safe"<<endl;
        
    }
	// your code goes here
	return 0;
}
