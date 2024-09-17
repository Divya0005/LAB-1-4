// READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE. 
#include<stdio.h>
int main(){
int n;
printf("enter a number=");
scanf("%d",&n);
int a=0;
for(int i=2;i<=n-1;i++)
{
    if(n%2==0){
        a=1;
        break;
    }

}
if(a==0){
    printf("given number is prime");

}
else{
    printf("given number is composite");
}
    return 0;
}