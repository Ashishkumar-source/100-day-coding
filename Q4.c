// Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
#include<math.h>
int main (){ 
float R ;
printf("enter radius : ");
scanf("%f", &R );
float circumference = 2*3.14*R ; 
printf(" circumference is %f \n ",circumference);
float area = 3.14 * R * R;
printf(" area is %f \n",area);
return 0;
}


