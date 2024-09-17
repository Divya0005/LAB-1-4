//PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME.
#include<stdio.h>
int main(){
int hours,minutes,seconds;
printf("enter seconds=");
scanf("%d",&seconds);
hours=seconds/3600;
seconds=seconds%3600;
minutes=seconds/60;
seconds=seconds%60;
printf("%d hours %d minutes %d seconds ",hours,minutes,seconds);

    return 0;
}