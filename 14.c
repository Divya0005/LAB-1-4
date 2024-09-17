//PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL 
//CASE LETTER, A DIGIT OR A SPECIAL SYMBOL. 
#include<stdio.h>
int main(){
char ch;
printf("enter character=");
scanf("%c",&ch);
if(ch>47 && ch<58) printf("It is digit");
else if(ch>=65 && ch<=90) printf("It is capital case letter");
else if(ch>=97 && ch<=122) printf("It is small case letter");
else printf("It is special symbol");

    return 0;
}