//PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND. 
#include <stdio.h>

int main() {
    int hours,minutes,seconds,totalseconds;

        
    printf("hours=");
    scanf("%d", &hours);

    printf("minutes=");
    scanf("%d", &minutes);
    printf("seconds=");
    scanf("%d", &seconds);

    totalseconds=(hours*3600)+(minutes*60)+seconds;

    
    printf("time in seconds=%d\n",totalseconds);

    return 0;
}
