#include<stdio.h>
#include<stdlib.h>
int power(int x,int y)
{
       int ans=1,i;
       for(i=1;i<=y;i++)
       {
             ans=ans*x;
       }
       return ans;
}             
       
int main(int argc,char* argv[])
{

            int value1=atoi(argv[1]);
            int value2=atoi(argv[2]);
            int i,j,k,count,temp,sum;
            
            for( i=value1;i<=value2;i++)
            {
                      count=0;
                      temp=i;
                      sum=0;
                      while(temp)
                      {
                          temp/=10;
                          count++;
                       }
                           temp=i;  
                           while(temp)
                           {
                                
                            sum=sum+power(temp%10,count);  
                            temp/=10;
                           } 
                           if(i==sum)
                           {
                                 printf("%d ",i);
                            }
              }                   
                                 
                                 
                                 
                                 
                                 
           return 0;                      
     }                            
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                 
                                   
