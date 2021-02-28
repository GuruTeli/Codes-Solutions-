#include<iostream>
using namespace std;
int sum(int x[],int l)
{
  int j,s1=0;
  for(j=1;j<=l;j++)
    s1=s1+x[j];
   return s1;
}
int main() {
	int n,k=1,i,c,t,j;
	cin>>t;
	for(int j=0;j<=t;j++)
	{
	cin>>n;
	int a[n];
	a[1]=1;
	c=0;
	for(int i=1;i<=n/2+1;i++)
	{
	    if(i>sum(a,k))
	    {
	        k++;
	        a[i]=k;
	    }
	}
	for(int i=1;i<=k;i++)
	{
	    if(a[i]!=0)
	    c++;
	}
	
	cout<<c<<endl;
	for(int i=1;i<=k;i++)
	a[i]=0;
	k=1;
	}
	return 0;
}
