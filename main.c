/* program that used a general function which works on arrays of different sizes.

 flow of the code:

1. define a header file based on requirement.
2. define a function based on requirement and passing arrguments.
3. define a main function based on requirement.
4. used printf statement and print array element also.
5. used return function.
6. call the function with same name with same arrguments.
7. make a logic to get the count sum of array element like used for loop and using sum varaible and assing the sum value of the array elemnt.
8. used the printf function and printf the sum values .

*/

#include<stdio.h>


int add(int arr[], int n);

int main(void){
    int a[5];
    int sum = 0;
    
    printf("Enter 5 array elements:\n");
    for(int i=0; i<5; i++){
      
        scanf("%d", &a[i]); 
    }
    
    
    sum = add(a, 5); 
    

    printf("Sum of the elements is %d", sum);
    
    return 0;
}


int add(int arr[], int n) {
    int s = 0;
    for(int i=0; i<n; i++){
        s = s + arr[i];
    }
    return s; 
}
