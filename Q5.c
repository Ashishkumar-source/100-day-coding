// Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main (){
float celsius ;
printf("enter celsius value : ");
scanf("%f", &celsius);
float fahrenheit = (celsius * 9/5 )+32;
printf("value of fahrenhite is %f .",fahrenheit);
return 0;
}
