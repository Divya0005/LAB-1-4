//PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE.
#include <stdio.h>
int main()
{
 float a,b; 
    int operator;
    printf("enter number first:");
    scanf("%f", &a);
    printf("\nenter number second:");
    scanf("%f", &b);
    printf("1.addition\n2.subtraction\n3.multiplication\n4.division\n");
    printf("enter your choice:");
    scanf("%d", &operator);
    switch (operator)
    {
    case 1:
        printf("%f+%f=%f", a, b, a + b);
        break;
    case 2:
        printf("%f-%f=%f", a, b, a - b);
        break;
    case 3:
        printf("%f*%f=%f", a, b, a * b);
        break;
    case 4:
        if (b == 0)
        {
            printf("not define");
        }
        else
        {
            printf("%f/%f=%f", a, b, a / b);
        }
        break;
    default:
        printf("not a valid arithmatic operator");
        return 0;
    }
}