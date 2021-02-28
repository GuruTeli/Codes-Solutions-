#include<bits/stdc++.h>
using namespace std;
int main()
{
     int test,numer,denomr;
     cin>>test;
     while(test--)
     {
          cin>>numer;
          cin>>denomr;
          int rem=0,quo=0;
          rem=numer%denomr;
          quo=numer/denomr;
          cout<<quo<<" "<<rem<<endl;
          }
          return 0;
}          
