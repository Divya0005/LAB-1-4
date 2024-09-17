 //PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER 
//FILE(<MATH.H>).
 #include<stdio.h>
 int main(){
int x,y;
int power =1;
printf("enter base=");
scanf("%d",&x);
printf("enter power=");
scanf("%d",&y);
for(int i=1;i<=y;i++)
{
    power=power*x;
}
printf("%d raise to %d=%d",x,y,power);


    return 0;
 }