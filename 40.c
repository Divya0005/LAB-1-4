// READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A
// LIST OF NUMBERS READ.
#include <stdio.h>
int main()
{
    int num=0;int sum=0;
    while (num>= 0)
    {
        printf("enter the number:");
        scanf("%d", &num);
        if(num<0)   break;
      
        sum += num;   
    }
    printf("sum =%d", sum);
    return 0;}