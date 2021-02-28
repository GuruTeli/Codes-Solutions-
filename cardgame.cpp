#include<bits/stdc++.h>
using namespace std;

int main()
{

      int tests,N;
      int chefA,mortyB;
      cin>>tests;
      while(tests-->0)
      {
           cin>>N;
           int count1=0,count2=0;
           for(int i=0;i<N;i++)
           {
                cin>>chefA;
                cin>>mortyB;
            
              
                  int result1=0,result2=0;
               
               
                   if(chefA!=0 || mortyB!=0)
                   {
                      while(chefA!=0)
                      {
                          
                           result1=result1+chefA % 10;
                           chefA=chefA/10;
                           
                       }
                       while(mortyB!=0)
                       {
                                
                                  result2+=mortyB%10;
                                 
                                  mortyB=mortyB/10;
                        }   
                        
                        if(result1==result2)
                        {
                              count1++;
                              count2++;
                         } 
                         
                    if(result1>result2)
                    {
                           count1++;
                          
                    }
                    else if(result2>result1){  
                         count2++;
                          
                          }
                   }
                   else{
                             count1=0;
                             count2=0;
                        }            
             }
            if(count1>count2)
             {
                 cout<<"0"<<" "<<count1<<endl;
              }else if(count2>count1)
                     {
                            cout<<"1"<<" "<<count2<<endl;
                      }
                      else if(count1==count2){
                              cout<<"2"<<" "<<count2<<endl;
                              }        
             }
             return 0;
 }            
             
             
             
