#include<iostream>
using namespace std;
int main()
{
      int test,number;
      cin>>test;
      while(test-->0)
      {
             cin>>number;
             if(number & 1==1)
             {
                 cout<<"ODD"<<endl;
             }
             else{
                    cout<<"EVEN"<<endl;
                    }
       }
       return 0;
}                    
             
