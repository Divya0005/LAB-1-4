//PROGRAM TO READ THREE NOS. AND PRINT MAX
#include <stdio.h>
int main(){
int n1,n2,n3,max;
printf("enter numbers=");
scanf("%d %d %d",&n1,&n2,&n3);
max=n1;
if(n2>max){
  if(n2>n3)max=n2; 
  else max=n3;
}
else if(n3>n1) max = n3;


    
printf("maximum number=%d\n",max);
    return 0;
}
