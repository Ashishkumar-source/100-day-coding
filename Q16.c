// Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main() {

int num1,num2,num3 ;
printf("Enter three number : ");
scanf("%d\n %d\n %d", &num1, &num2, &num3);
 

if ( num1 >= num3 && num1 >= num2 ) {
	printf(" %d is LARGEST Number\n",num1);
} else if ( num2 >= num1 && num2 >= num3 ) {
	printf("%d is LARGEST Number \n " , num2);
} else {
	printf("%d is LARGEST Number \n " ,num3 );
} 
return 0;
}
