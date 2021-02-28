#include<iostream>
using namespace std;
int main()
{
     int test;
     cin>>test;
      int number;
     while(test-->0)
     {
         cin>>number;
         if(number==0)
         {
             cout<<"Entered number is zero"<<endl;
          } else if(number<0)
         {
           cout<<number<<" "<<"is negative"<<endl;
         }
           else{
                   cout<<number<<" "<<"is positive"<<endl;
                   }
                   
       }
       return 0;
}       
