#include<stdio.h>
int main (){
int n,sum = 0;
printf("enter number : ");
scanf("%d",&n);
if(n<=0){
printf(" please enter a positive number.\n");
printf("thank you\n ");
}
for(int i=1;i<=n;i++){
sum = sum +i ;
}
printf("The sum of first %d natural number is %d\n",n,sum);

return 0 ; 
 
}
