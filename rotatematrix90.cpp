#include<iostream>
using namespace std;
int main()
{
         int test,size1,size2;
         cin>>test;
         while(test-->0)
         {
               cin>>size1;
               cin>>size2;
               int arr[size1][size2];
               for(int i=0;i<size1;i++)
               {
                     for(int j=0;j<size2;j++)
                     {
                         cin>>arr[i][j];
                      }
                     //cout<<endl;
                }         
                  cout<<"rotated matrix:="<<endl;       
               for(int i=0;i<size1;i++)
               {
                     for(int j=i;j<size2;j++)
                     {
                            
                              arr[j][i];
                            
                      }
                     
              }
              
              for(int i=0;i<size2;i++)
              {
                  for(int j=0;k<size2-1;j<k;j++,k--)
                  {
                         cout<<arr[j][i]<<" ";
                   }
                   cout<<endl;
                   }      
                         
            }
            return 0;
  }                          
