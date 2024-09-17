// READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF 
//N 
#include <stdio.h>
int main()
{
    int n, sum=0, i, suminsingledigit = 0;
    printf("enter the number:");
    scanf("%d",&n);
    while (n != 0)
    {
        i = n % 10;
        sum = sum + i;
        n /= 10;
    }
    printf("\nsum of digits of number = %d", sum);
    while (sum != 0)
    {
        i = sum % 10;
        suminsingledigit = suminsingledigit + i;
        sum /= 10;
    }
    printf("\nsum in single digit = %d", suminsingledigit);
    return 0;
}