//PROGRAM TO CALCULATE AREA OF A TRIANGLE
#include <stdio.h>

int main() {
    float base,height;
    float area;
       printf("Enter base= ");
    scanf("%f", &base);
    printf("Enter height= ");
    scanf("%f", &height);
       area = 0.5 * base * height;

    printf("The area of the triangle is: %f\n", area);

    return 0;
}
