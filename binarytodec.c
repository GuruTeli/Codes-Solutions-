#include<stdio.h>
#include<math.h>
int main()
{
       long long binary;
       printf("Enter bianry value:= \n");
       scanf("%lld",&binary);
       long long count=0,dec=0,rem=0;
       while(binary!=0)
       {
             
             rem=binary%10;
             if(rem==1)
             {
                 dec+=pow(2,count);
              }
              binary/=10;
              count++;
       }
       printf("Decimal:=%lld \n",dec);
       return 0;
 }                
