// PROGRAM TO CALCULATE SIMPLE INTEREST.
#include <stdio.h>
int main()
{
    float principal;
    printf("principal=");
    scanf("%f", &principal);
    float rate;
    printf("rate=");
    scanf("%f", &rate);
    float time;
    printf("time=");
    scanf("%f", &time);
    float simpleinterest;
    simpleinterest = (principal * rate * time) / 100;
    printf("Simple interest is %f", simpleinterest);
    return 0;
}