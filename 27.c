// PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT.
#include<stdio.h>
int main(){
int n;
printf("enter a number=");
scanf("%d",&n);
int a=0;
for(int i=2;i<=n-1;i++)
{
    if(n%i==0){
        a=1;
        break;
    }

}
if(a==0){
    printf("given number is prime");

}
else{
    printf("given number is not prime");
}
    return 0;
}