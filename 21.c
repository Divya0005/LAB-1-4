//PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING ARITHMETIC 
//OPERATOR)AND THIS  PERFORM USING SWITCH-CASE.(CASE IN CHAR FORM). 
#include <stdio.h>
int main()
{
    float a, b; 
    char operator;
    printf("enter first number:");
    scanf("%f", &a);
    printf("\nenter second number:");
    scanf("%f", &b);
    printf("choose operator(+,-,*,/):");
    scanf(" %c", &operator);
    switch (operator)
    {
    case '+':
        printf("%f+%f=%f", a, b, a + b);
        break;
    case '-':
        printf("%f-%f=%f", a, b, a - b);
        break;
    case '*':
        printf("%f*%f=%f", a, b, a * b);
        break;
    case '/':
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