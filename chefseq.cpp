#include<bits/stdc++.h>

using namespace std;

int main()
{

         long test;
         cin>>test;
         long long N;
         while(test-->0)
         {
              cin>>N;
              int temp=0,flag1=0;
              
              long long a[N],b[N],count=0;
              for(int i=0;i<N;i++)
              {
                   cin>>a[i];
                   cin>>b[i];
               }
               sort(a,a+N,greater<int>());
               sort(b,b+N,greater<int>());
               if(N==1)
               {
                     if(a[0]!=b[0])
                     { cout<<"-1"<<endl;
                        break;
                      }
                }        
                  
               for(int j=0; j<N;j++)
               {
                    for(int k=0;k<N;k++)
                    {
                    
                          if(a[j]==b[k])
                          {
                               count++;
                               j++;
                               if(count==N)
                               {
                                  cout<<"0"<<endl;
                                  break;
                               }   
                          }else if(a[j]<b[k] && b[k+1]==b[k])
                                 {
                                                 temp=a[j];
                                                 a[j]=b[k+1];
                                                 b[k+1]=temp;
                                                 flag1=1;
                                                 j=j+N;
                                                 k=k+N;
                                  }
                        }
                        if(flag1==1)
                        {
                           cout<<"1"<<endl;
                        }   
                 }
             }    
                 
              
              return 0;
     }                       
                        
                        
                        
                        
                        
                        
                        
                        
                        
                                                 
