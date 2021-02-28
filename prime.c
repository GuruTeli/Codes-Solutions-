#include<stdio.h>
int main()
{

       int value,i,flag=0;
       scanf("%d",&value);
       for(i=2;i<value/2;i++)
       {
            if(value%i==0)
            {
                  flag=1;
                  break;
            }
       }           
       if(flag==1)
       {
             printf("Not a prime \n");
       }
       else{
            printf("Prime \n");
            
            }
       return 0;
}      
