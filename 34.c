// PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…) 
#include<stdio.h>
int main(){
int n,a=0,b=1,c;
printf("enter a number=");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    printf("%d ",a);
    c=a+b;
    a=b;
    b=c;
}
    return 0;
}