#include<bits/stdc++.h>
using namespace std;
long long nCr(int ,int );
long long fact(int );
int main()
{

         int test,N,k;
         cin>>test;
         while(test-->0)
         {
               cin>>N;
               cin>>k;
              int arr[N];
               for(int i=0;i<N;i++)
               {
                       cin>>arr[i];
                       
                }
                
               
               
                int q=sizeof(arr)/sizeof(arr[0]);
               
                sort(arr,arr+q);
                
                int frearr[101]={0};
                
                
                for(int j=0;j<q;j++)
                {
                       
                       frearr[arr[j]]++;
                }
               
                
                
                int n=frearr[arr[k-1]];
                int r=0;
                for(int i=0;i<k;i++)
                {
                     if(arr[i]==arr[k-1])
                          {  
                               r++;
                          
                          } 
                } 
               
                cout<<nCr(n,r)<<endl;
                 
            }
  }
  
  long long nCr(int n,int r)
  {
        return fact(n)/(fact(r)*fact(n-r));
  }
  long long fact(int n)
  {
       long long res=1;
       for(int i=2;i<=n;i++)
       {
             res=res*i;
         }
            return res;
   }         
               
               
      
