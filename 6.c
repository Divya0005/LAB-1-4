//PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE.
#include <stdio.h>

int main() {
    int a, b;

        printf("Enter a : ");
    scanf("%d", &a);

        printf("Enter b : ");
    scanf("%d", &b);
        a=a+b;  
    b=a-b;  
      a=a-b;  
              printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
