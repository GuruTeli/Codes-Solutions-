#include<stdio.h>
#include<string.h>
int main()
{

       char str[30];
       scanf("%[^\n]%*c",str);
       int i,count=0;
       int l=strlen(str);
       for(i=0;i<l;i++)
       {
                if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' ||
                   str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
                   {
                         count++;
                   }
        }
        
        printf("Number of vowels in given string:=%d \n",count);
        return 0;
        }
                              
