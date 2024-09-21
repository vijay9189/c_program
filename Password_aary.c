#include<stdio.h>
int main(void)
{
    char UI[5];
    int i=0;
    
    while(i < 5)
    {
        printf("enter a five digit password[%i]\n",i);
        scanf(" %c",&UI[i]);
        i = i +1;
    }
    
    if(UI[0] == '1' &&  UI[1] == '2' && UI[2] == '3' &&  UI[3] == '4' && UI[4] == '5'){
        
        printf("access granted");
    }
    else{
        printf("access denied");
    }
    return 0;
}