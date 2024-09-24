#include<stdio.h>
int main(){
    
    int num1,num2;
    
    printf("enter the num1:");
    scanf("%i",&num1);
     printf("enter the num2:");
    scanf("%i",&num2);
    
   while(num1 < num2){
       printf(" %i",num1);
       num1++;
   }
   return 0;
}