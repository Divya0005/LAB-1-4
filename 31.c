//. PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.
#include<stdio.h>
int main(){
int n,r;
int sum = 0;
printf("Enter a number=");
scanf("%d",&n);
while(n>0){
    r=n%10;
    sum=sum+r;
    n=n/10;
}
printf("sum of digits=%d",sum);
    return 0;
}