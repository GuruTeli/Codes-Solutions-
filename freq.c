#include<stdio.h>
#include<string.h>
int main()
{
       char str[50];
       scanf("%[^\n]%*c",str);
       int frarr[256]={0};
       int l=strlen(str);
       int i;
       for(i=0;i<l;i++)
       {
            frarr[str[i]]++;
       }
       for(i=0;i<256;i++)
       {
             if(frarr[i]!=0)
             printf("letter=%c and count=%d \n",i,frarr[i]++);
        }
        return 0;
 }              
