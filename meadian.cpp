#include<bits/stdc++.h>
using namespace std;
int main(int argc,char* argv[])
{

         int arr[argc-1];
         for(int i=1;i<=argc-1;i++)
         {
                arr[i]=atoi(argv[i]);
               // cout<<arr[i]<<endl;
          }
          int n=argc-1;
          int value=n/2,result=0;
          
          cout<<n;
          //cout<<value<<endl;
          sort(arr,arr+n);
        // cout<<arr[value]<<" "<<arr[value+1];
          
          if(n%2==0)
          {
                float result1=(arr[value]+arr[value+1])/2;
                cout<<result1<<endl;
          }else{
                      result=arr[value+1];
                      cout<<result<<endl;
                      }      
          return 0;
 }         
                
