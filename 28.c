// PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT. 
#include <stdio.h>
#include <math.h>
int main()
{
    int num, r, count = 0, sum = 0, x, y;
    printf("enter the number:");
    scanf("%d", &num);
    x = num;
    y = num;
    while (num != 0)
    {
        r = num % 10;
        count += 1;
        num /= 10;
    }
    while (x != 0)
    {
        r = x % 10;
        sum += pow(r, count);
        x /= 10;
    }

    if (y == sum)
    {
        printf(" Armstrong number ");
    }
    else
    {
        printf("\nNot a armstrong number ");
    }
    return 0;
}