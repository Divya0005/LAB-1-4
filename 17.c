//PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.(&&) 
#include <stdio.h>
int main(){
int n1,n2,n3;
printf("enter numbers=");
scanf("%d %d %d",&n1,&n2,&n3);
if(n1>=n2 && n1>=n3){
    printf("n1=maximum");
    
}
else if(n2>=n3 && n2>=n1){
    printf("n2=maximum");
    
}

  else{
    printf("n3=maximum");
  }  

    return 0;
}