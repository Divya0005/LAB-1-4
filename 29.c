//PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.
#include<stdio.h>
int main(){
int n,x,r,s=0;
printf("enter a number=");
scanf("%d",&n);
x=n;
while(n>0){
    r=n%10;
    s=r+(s*10);
    n=n/10;
}
if(x==s)
{printf("it is palindrome");}
else{
    printf("not a palindrome");
}

    return 0;
}