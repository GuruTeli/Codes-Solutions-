#include<bits/stdc++.h>
using namespace std;
int main()
{
     int tests;
     long N,x,y;
     cin>>tests;
     while(tests-->0)
     {
          cin>>N;
          int X[4*N-1]={0};
          int Y[4*N-1]={0};
          for(int i=0;i<4*N-1;i++)
          {
                cin>>X[i];
                cin>>Y[i];
           }
           int temp1=X[0];
           int temp2=Y[0];
           for(int i=0;i<4*N-1;i++)
           {
                   for(int j=i+1;<4*N-1;j++)
                   {
                          if((Y[j]>=Y[i] || y[j]=<Y[i]) && (X[i]==X[j]))
                          {
                              int dity=Y[j]+Y[i];
                              int ditx=X[j]+X[i];
                           }   
                
            }
       }
     return 0;
  }                   
                
                
