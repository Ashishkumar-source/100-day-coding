// Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main (){
char ch ;
printf("enter a character : ");
scanf("%c",&ch);

if ((ch>='A' && ch <= 'Z') || (ch>= 'a' && ch<= 'z' )){
   if ( ch == 'A' || ch == 'E' || ch ==	'e' || ch == 'a' || 
       ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || 
       ch == 'u' || ch == 'U' ){
 printf("%c is a Vowel ", ch  );
 } else {
    printf("%c is a Constant. " , ch );
}
} else {
  printf("%c is not an alphabet character ", ch );
}
return 0; 
}
