#include<stdio.h>
int main(){
int length,width;
printf("length of rectangle: ");
scanf("%d",&length);
printf("width of rectangle: ");
scanf("%d",&width);
printf("area of rectangle is %d \n",length*width );
printf("perimeter of rectangle is %d \n", 2*length+2*width);
return 0;
}
