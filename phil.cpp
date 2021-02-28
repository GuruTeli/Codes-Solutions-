#include<bits/stdc++.h>
using namespace std;
int mincoins(int[],int,int);
int main()
{
        int tests,N;
        cin>>tests;
        while(tests--)
        {
             cin>>N;
              int v=N,arr[N],temp=0;
             for(int i=0;i<N;i++)
             {      
                      temp=temp+1;
                      arr[i]=temp;
             } 
              int m = sizeof(arr)/sizeof(arr[0]); 
              cout<<"ff"<<m<<endl;
             cout<<mincoins(arr,m,N)<<endl;
                       
                       
        }
           return 0;
 }
int mincoins(int coins[],int m,int N)
{

       if(N==0)return 0;
       int res = INT_MAX; 
   for (int i=0; i<m; i++) 
   { 
     if (coins[i] <= N) 
     { 
         int sub_res = mincoins(coins, m,N-coins[i]); 
  
         // Check for INT_MAX to avoid overflow and see if 
         // result can minimized 
      //   if (sub_res != INT_MAX && sub_res + 1 < res) 
            res = sub_res + 1; 
     } 
   } 
   return res; 
   
   }
