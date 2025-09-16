// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>

int main() {

int x ;

printf("Enter a Inteager : ");
scanf("%d",&x);

if (x>=0){
   if (x==0){
  printf("It is Zero \n");
} else {
printf("It is positive\n  ");
}
}else {
printf("It is Negative . \n "); 
}
return 0;

}
