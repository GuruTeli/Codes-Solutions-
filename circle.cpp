#include<iostream>
#include<stdio.h>
using namespace std;
int main(int argc ,char* argv[])
{

        int rad=atoi(argv[1]);
        float  ans;
        
        ans=3.141*rad*rad;
        printf("%.3f",ans);
        return 0;
}
        

