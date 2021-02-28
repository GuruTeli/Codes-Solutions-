#include<bits/stdc++.h>
using namespace std;
void printMax(int arr[],int n,int k);
int main()
{
       int test,size,k;
       cin>>test;
       while(test-->0)
       {
             
             cin>>size;
             cin>>k;
             int arr[size];
             for(int i=0;i<size;i++)
             {
                 cin>>arr[i];
              }
              
              printMax(arr,size,k);
       }
       return 0;
 }
 
void printMax(int arr[],int n,int k)
{
           deque<int> Q(k);
           int i;
           for(i=0;i<k;i++)
           {
                while((!Q.empty())&& arr[i]>=arr[Q.back()])
                      {
                               Q.pop_back();
                      }
                      
                      Q.push_back(i);
            }
            for( ;i<n;i++)
            {
                     cout<<arr[Q.front()]<<" ";
                     while((!Q.empty())&& arr[i]>=arr[Q.back()])
                     {
                           Q.pop_back();
                     }
                     //cout<<"Q.front():="<<Q.front()<<endl;
                     //cout<<"i:="<<i<<" ";
                     
                     
                     while((!Q.empty()) && Q.front()<=i-k)
                     {
                              Q.pop_front();
                     }
                     Q.push_back(i);
             }
             cout<<arr[Q.front()]<<" ";
             
}                                    
               
               
               
               
               
               
               
               
               
               
               
               
               
                                                   


