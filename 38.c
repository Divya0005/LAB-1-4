// PROGRAM TO PRINT 1,4,9,16,25,………N. 
#include<stdio.h>
int main(){
int n,z;
printf("enter a number=");
scanf("%d",&n);

for(int i=1;i<=n;i++){
    z=i*i;
    printf("%d ",z);
}
    return 0;
}