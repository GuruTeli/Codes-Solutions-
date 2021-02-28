#include<stdio.h>
#include<math.h>
#include<string.h>


int main()
{

        char binary[100];
        printf("Enter binary value:= \n");
        scanf("%s",binary);
        int l=strlen(binary),i,count=0,dec=0,flag=0;
        for( i=l-1;i>=0;i--)
        {
            if(binary[i]>49)
            {
               
                 flag=1;
                 break;
            }         
            if(binary[i]==49)
            {
                 dec+=pow(2,count);
             }
             count++;
         }
         if(flag==1)
         {
             printf("Invalid Binary \n");
          }else{   
                 printf("Decimal:=%d \n",dec);
                 }
         return 0;
 }                
        
