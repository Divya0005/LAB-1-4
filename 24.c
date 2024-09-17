 
#include<stdio.h>
int main(){
int x,n,a;
int power=1;
printf("Enter the number=");
scanf("%d",&x);
printf("Enter the n=");
scanf("%d",&n);
if(n==1){
    a=1+x;
    printf("%d",a);

}
else if(n==2){
    
    a=1+(x/n);
    printf("%d",a);
}
else if(n==3){
    for(int i=1;i<=3;i++){
        power=power*x;
      
    }
    printf("%d",1+power);
}
else {
    a=1+n*x;
    printf("1+n*x");
}
    return 0;
}