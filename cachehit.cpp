#include<bits/stdc++.h>
using namespace std;
int main()
{
       int test,n,b,m;
       cin>>test;
       while(test--)
       {
            cin>>n>>b>>m;
            int arr[m];
            for(int i=0;i<m;i++)
            {
                  cin>>arr[i];
             }
               
           int block=arr[0]/b;
           int cnt=1;
           for(int i=1;i<m;i++)
           {
                
                   if(arr[i]/b!=block)
                   {
                       block=arr[i]/b;
                       cnt++;
                   }
             }
             cout<<cnt<<endl;
             }
             return 0;
 }         
