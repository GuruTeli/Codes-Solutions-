#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{

          string s1,ori;
          cin>>s1;
          cin>>ori;
          int count=0,i=0,j=0;
          
          
                      while(ori[j]!='\0')
                      {
                          
                      if(s1[i]==ori[j])
                      {
                      
                           
                       }
                       else{
                               i=0;
                               
                            }  
                                     
                       j++;
                       i++;
                      
                       }
                      
                     
             if(s1.length()==i)
             {
                 cout<<"found"<<endl;
             }
             else{
                      cout<<"Not found"<<endl;
                    }
                    return 0;
                    }                        
          
