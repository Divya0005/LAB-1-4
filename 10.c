/*WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE 
FORMULA. 
CM = M/2+P/2+C/2+E 
WHERE CM = Cut of f mark 
M = Marks in Mathematics out of 200 
P = Marks in Physics out of 200 
C = Marks in Chemistry out of 200 
E = Marks in entrance examination out of 100*/
#include <stdio.h>

int main() {
   float M,P,C,E;
   float CM;

       printf("Enter maths marks= ");
    scanf("%f",&M);

         printf("Enter physics marks= ");
    scanf("%f",&P);

     printf("Enter chemistry marks= ");
    scanf("%f",&C);

     printf("Enter entrance marks=");
    scanf("%f",&E);
  
     CM = (M / 2)+(P / 2)+(C / 2)+E;

   
    printf("cutoff mark= %f\n", CM);

    return 0;
}
