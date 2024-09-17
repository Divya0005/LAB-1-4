// PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE 
//LETTER OR NOT USING CONDATIONAL OPERATOR.
#include<stdio.h>
int main(){
char ch;
printf("Enter a letter=");
scanf("%c",&ch);
if(ch>=97 && ch<=122) printf("It is small case letter");
else printf("It is not a small case letter");


    return 0;
}