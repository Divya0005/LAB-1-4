// PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION.
#include<stdio.h>
int main(){
   int subject1,subject2,subject3,subject4,subject5,totalmarks;
   float average;
   printf("enter marks of subject1=");
   scanf("%d",&subject1);
   printf("enter marks of subject2=");
   scanf("%d",&subject2);
   printf("enter marks of subject3=");
   scanf("%d",&subject3);
   printf("enter marks of subject4=");
   scanf("%d",&subject4);
   printf("enter marks of subject5=");
   scanf("%d",&subject5);
   totalmarks=subject1+subject2+subject3+subject4+subject5;
   printf("total marks=%d\n",totalmarks);
   average=totalmarks/5.0;
   printf("average=%f\n",average);
   if(average>=80){
    printf("A division");
   }
   else if(average>=60){
    printf("B division");
   }
else if(average>=40){
    printf("C division");
   }
else{
    printf("D division");
}
    return 0;
}