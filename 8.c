//EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C 
//PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES 
#include<stdio.h>
int main(){
int days,hours,minutes;
int seconds=31558150;


days=seconds/(24*3600);
seconds=seconds%(24*3600);
hours=seconds/3600;
seconds=seconds%3600;
minutes=seconds/60;
printf("%d days %d hours %d minutes",days,hours,minutes); 

    return 0;
}