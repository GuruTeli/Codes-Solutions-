#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[])
{
 if(argc==1)
 {
 printf("No arguments");
 return 0;
 }
 else
 {
     int radius;
 float pi=3.141;
 double area;
 radius=atoi(argv[1]);
 area=pi*radius*radius;
 printf("%.3f",area);
 }
 return 0;
 }
