//PROGRAM TO PRINT 2,4,6,8,10,12………N.
#include<stdio.h>
int main(){
int n;
printf("enter a number=");
scanf("%d",&n);

for(int i=2;i<=(2*n);i+=2){
    printf("%d ",i);
}
    return 0;
}