#include<bits/stdc++.h>
using namespace std;
//void dfs(int v);


int main()
{

        int vertex,edges,a,b;
        cin>>vertex;
         vector<int> arr[vertex+1];
        cin>>edges;
        while(edges-->0)
        {
        
              cin>>a>>b;
              arr[a].push_back(b);
              arr[b].push_back(a);
        }
        
        for(int i=1;i<=vertex;i++)
        {
               //vector<int> l=arr[i];
              // cout<<l<<" ";
               for(int j=0;j<=arr[i].size();j++)
               {
                     cout<<arr[i][j]<<"->";
               }
               cout<<endl;
         }
         return 0;
 }                         
              

    
