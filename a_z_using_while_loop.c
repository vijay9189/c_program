// Write a C program to print all alphabets from a to z. – using while loop.

#include<stdio.h>
int main(){
    
    int a=65, b=90;
    
    while(a <= b){
      
        printf("%c\t",a);
          a++;
    }
    return 0;
}