//PROGRAM TO CALCULATE FACTORIAL OF A NO
#include<stdio.h>
int main(){
int n;
int i=1;
printf("Enter a number=");
scanf("%d",&n);
int product=1;
for(int i=1;i<=n;i++)
{
    product=product*i;}
    printf("factorial is=%d",product);
    return 0;
}