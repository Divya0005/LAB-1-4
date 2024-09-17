// READ A NUMBER N AND PRINT FACTOR OF N.(EX 28= 1,2,4,7,14,28)
#include <stdio.h>
int main() {
int n,i;
printf("Enter no:");
scanf("%d",&n);
printf("factors are:");
for(i=1;i<=n;i++)
{
    if(n%i==0)
    {printf("%d ",i);}
}
    return 0;
}
