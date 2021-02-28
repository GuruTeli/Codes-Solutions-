#include<stdio.h>
#include<math.h>

int main()
{

      int value,i,sum=0,count=0;
      scanf("%d",&value);
      int temp=value;
      while(temp!=0)
      {
           count++;
           temp/=10;
      }     
      temp=value;
      while(temp!=0)
      {     
            sum+=pow(temp%10,count);
            temp/=10;
       }
       temp=value;
      // printf("%d",sum);
       if(temp==sum)
       {
            printf("Armstrong value \n");
       }
       else{printf("Not armstrong value \n");
       }
       return 0;
       
 }                
             
