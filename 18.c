//PROGRAM TO READ THREE NOS. AND PRINT MAX USING CONDITIONAL (? :) 
//OPERATOR. 
#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the numbers");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
int max = (a>b)?((a>c)? a:c):((b>c)?b:c);
printf("Maximum number=%d\n",max);
    return 0;
}