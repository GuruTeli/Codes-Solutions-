#include<stdio.h>
#include<string.h>
int main()
{

       char str[20];
       scanf("%s",str);
       int l=strlen(str);
       int i,j,count=0;
       for(i=0;i<l;i++)
       {
            //for(j=i;j<i+1;j++)
            //{
                  if(i+1>l)
                  {
                       break;
                  }else{     
                  if(str[i]=='a' && str[i+1]=='b')
                  {
                        count++;
                        i++;
                  }
                  }
             //}
         }              
         printf("%d \n ",count);
   return 0;
   }       
