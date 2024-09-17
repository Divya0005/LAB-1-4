//PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W  1 TO N.
#include<stdio.h>
int main(){
int n;
printf("enter value of n=");
scanf("%d",&n);
int evensum=0,oddsum=0;
for(int i=1;i<=n;i++){
    if(i%2==0){
        evensum=evensum+i;
    }
    else{
        oddsum=oddsum+i;
    }
}
printf("evensum=%d\n",evensum);
printf("oddsum=%d",oddsum);
    return 0;
}