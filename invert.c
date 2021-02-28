#include<stdio.h>  
 int main()    
{    
int n, reverse=0, rem;    
printf("Enter a number: ");    
  scanf("%d", &n);   
  int origin=n; 
  while(n!=0)    
  {    
     rem=n%10;    
     reverse=reverse*10+rem;    
     n/=10;    
  }    
  //printf("Reversed Number: %d",reverse);
  if(origin==reverse)
  {
       printf("Palindrome \n");
   }
   else{
          printf("Not palindrome \n");}        
return 0;  
}
