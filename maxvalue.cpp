#include<bits/stdc++.h>
using namespace std;
int main()
{
         int test,k,size;
         cin>>test;
         while(test--)
         {
                cin>>size;
                cin>>k;
                int arr[size];
                for(int i=0;i<size;i++)
                {
                      cin>>arr[i];
                 }
                
                
                 for(int j=0;j<size-k+1;j++)
                 {
                            int max1=0;
                            int max2=0;
                             int count1=0;
                            int count2=0;
                            int q=0;
                            
                          for(int l=j;l<(k-1)+j;l++)
                          {
                                  if(arr[l]<arr[l+1])
                                  {
                                        max1=arr[l+1];
                                        count1++;
                                    }
                                    else{
                                           max2=arr[l];
                                           count2++;
                                          }
                                
                                       q=l;
                         }  
                         if(count2==2)
                           {
                              max2=arr[q-1];
                           } 
                           if(count1==2)
                            {
                              max1=arr[q+1];
                              }              
                      if(max1>max2)
                      {
                          cout<<max1<<" ";
                          }else{cout<<max2<<" ";}
                         
                }
                  
            }
            return 0;
 }                                
                      
        
