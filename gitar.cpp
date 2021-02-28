#include<bits/stdc++.h>
using namespace std;
int main()
{
      int tests;
      long long size;
      cin>>tests;
      while(tests-->0)
      {
           cin>>size;
           long long arr[size+1];
           for(int i=0;i<size;i++)
           {
                 cin>>arr[i];
           }
           
           long long  result=0;
           for(int j=0;j<size;j++)
           {
                   if(j==size-1)
                   {
                         cout<<result<<endl;
                         break;
                    }
                    else{
                            if(arr[j]<arr[j+1])
                            {
                                result+=(arr[j+1]-arr[j])-1;
                            }
                            else{
                                       result+=(arr[j]-arr[j+1])-1;
                                 }
                         }                      
           }
           
           }
        return 0;
 }                                 
