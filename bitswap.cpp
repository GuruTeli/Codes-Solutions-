#include<bits/stdc++.h>
using namespace std;
int main(int argc,char* argv[])
{

         char *p=argv[1];
         int length=0;
         char arr[100];
         while(*p!='\0')
         {
               arr[length++]=*p;
               
               p++;
         }
         int count=0,count1=0;
         for(int i=0;i<length;i++)
         {
         
                if(i+1>length)
                {
                     break;
                }else{
               if(arr[i]=='1'&& arr[i+1]=='0')
               {
                    p++;
               }
                if(pr!='1')
                {
                     p=(char*)1;
                     count++;
                }
                if(fo!='0')
                {
                      p+1=(char*)0;
                      count++;
                }
                p++;
          }  
           for(int i=0;i<length;i++)
         {
         
                char pr=*p;
                char fo=*p+1;
               if(pr=='0' && fo=='1')
               {
                    p++;
               }
                if(pr!='0')
                {
                     p=(char*)0;
                     count1++;
                }
                if(fo!='1')
                {
                      p+1=(char*)1;
                      count1++;
                }
                p++;
          }  
          if(count1<count)
          {
               cout<<count1<<endl;
           }
           else{
                    cout<<count<<endl;
               }         
          
   return 0;
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
}               
