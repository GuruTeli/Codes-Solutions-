#include<bits/stdc++.h>
using namespace std;
long long nCr(int ,int );
long long gcd_fun(long long, long long );
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
        long long num=1;
        long long den=1;
        if(r!=0)
        {
                while(r>0)
                {
                      num=num*n;
                      den=den*r;
                      long long gcd=gcd_fun(num,den);
                      num/=gcd;
                      den/=gcd;
                      n--;
                      r--;
                 }
        }
        else 
        {
           num=1;
        }
       return num;    
  }
  long long gcd_fun(long long num,long long den)
  {
       if(num==0)
       {
           return den;
       }
      return gcd_fun(den%num,num);
              
   }         
               
               
      

