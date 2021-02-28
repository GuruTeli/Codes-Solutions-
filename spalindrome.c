#include<stdio.h>
#include<string.h>
int main()
{

       char str[10];
       scanf("%s",str);
       int l=strlen(str);
       int i,j=l-1,flag=0;
       for(i=0;i<l/2;i++)
       {
             if(str[i]!=str[j])
             {
                    flag=1;
                    break;
             }
             j--;
        }
        if(flag==1)
        {
             printf("Not palindrome \n");
        }else{
                  printf("Palindrome \n");
                  }
                  
                  return 0;
 }                           
                    
