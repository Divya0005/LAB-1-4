//PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE TOTAL 
//AND PERCENTAGE. 
#include<stdio.h>
int main(){
int sub1,sub2,sub3,sub4,sub5,totalmarks;
float percentage;
printf("enter marks of sub1=");
scanf("%d",&sub1);
printf("enter marks of sub2=");
scanf("%d",&sub2);
printf("enter marks of sub3=");
scanf("%d",&sub3);
printf("enter marks of sub4=");
scanf("%d",&sub4);
printf("enter marks of sub5=");
scanf("%d",&sub5);
totalmarks=sub1+sub2+sub3+sub4+sub5;
printf("total marks=%d\n",totalmarks);
percentage=(totalmarks/500.0)*100;
printf("%f",percentage);
return 0;

}