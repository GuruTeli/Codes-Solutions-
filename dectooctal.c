#include<stdio.h>
int main()
{
    long long decimalnum, remainder;
    long long octalNumber[100], i = 1, j;
 
    printf("Enter the decimal number: ");
    scanf("%ld", &decimalnum);
    
    while (decimalnum != 0)
    {
        octalNumber[i++] = quotient % 8;
        quotient = quotient / 8;
    }
    
    for (j = i - 1; j > 0; j--)
        printf("%d", octalNumber[j]);
    return 0;
}

