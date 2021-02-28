#include<stdio.h>
void swap(int ,int,int);
int main()
{

       int n1,n2,n3;
       printf("enter two numbers:=\n");
       scanf("%d",&n1);
       scanf("%d",&n2);
       scanf("%d",&n3);
       swap(n1,n2,n3);
              
        return 0;
}       

void swap(int n1,int n2,int n3)
{
       n1=n1+n2;
       n2=n1-n2;
       n1=n1-n2;
       
       n2=n2+n3;
       n3=n2-n3;
       n2=n2-n3;
       
       printf("swapeed:=%d %d %d",n1,n2,n3);

}       
