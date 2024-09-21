#include<stdio.h>
int main(void)
{
    int i=0;
    int marks [5];
    int sum=0;
    float average=0;
    
    while(i < 5){
        
        printf("enter arry elemts %d:",i +1);
        scanf("%i",&marks[i]);
        i = i + 1;
        
    }
    i = 0;
    while(i < 5){
        
        sum = sum + marks[i];
        i = i + 1;
    }
    
    average = sum / 5;
    printf("average is %.2f\n",average);
    return 0;
}