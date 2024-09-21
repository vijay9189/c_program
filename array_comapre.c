#include<stdio.h>
int main()
{
    char pass[5]={'1','2','3','4','5'};
    char UI[5];
    int equal=1,i=0;
    
    while(i < 5){
        printf("enter the digit for array elelmnt:");
        scanf(" %c",&UI[i]);
        i = i + 1;
    }
    
        i = 0;
        
        while(i < 5){
            
            if(pass[i] != UI[i]){
                 equal=0;
            }
            i = i + 1;
        }
        
        if(equal == 1){
            printf("array are equal");
        }
        else{
            printf("not equal");
        }
    
    return 0;
}