// C++ Program to find number of pairs whose 
// concatenation contains all digits from 0 to 9. 
#include <bits/stdc++.h> 
using namespace std; 
#define N 20 
  
// Function to return number of pairs whose 
// concatenation contain all digits from 0 to 9 
int countPair(char str[N][N], int n) 
{ 
    int cnt[1 << 10] = { 0 }; 
  
    // making the mask for each of the number. 
    for (int i = 0; i < n; i++) { 
  
        int mask = 0; 
        for (int j = 0; str[i][j] != '\0'; ++j)  
            mask |= (1 << (str[i][j] - '0'));         
        cnt[mask]++; 
    } 
     
    // for each of the possible pair which can  
    // make OR value equal to 1023 
    int ans = 0; 
    for (int m1 = 0; m1 <= 1023; m1++) 
        for (int m2 = 0; m2 <= 1023; m2++) 
            if ((m1 | m2) == 1023) { 
  
                // finding the count of pair  
                // from the given numbers. 
                ans += ((m1 == m2) ?  
                       (cnt[m1] * (cnt[m1] - 1)) :  
                       (cnt[m1] * cnt[m2])); 
            } 
  
    return ans / 2; 
} 
  
// Driven Program 
int main() 
{ 
    int n = 5; 
    char str[][N] = { "129300455", "5559948277", 
               "012334556", "56789", "123456879" }; 
    cout << countPair(str, n) << endl; 
    return 0; 
} 




