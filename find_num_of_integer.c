#include<stdio.h>
int main(void)
{
    int num;

    
    printf("enter the posive integer num:");
    scanf("%d",&num);
    
    if(num < 10)
    {
        printf("num of digit is one\n");
    }
    else if(num < 100){
        
         printf("num of digit is two\n");
    }
    else if(num < 1000){
        
         printf("num of digit is three\n");
    }
      else if(num < 10000){
        
         printf("num of digit is four\n");
    }
    return 0;
    
}