#include<stdio.h>
int main(void)
{
    int x,y,z;
    
    printf("enter x value:");
    scanf("%d",&x);
    
      printf("enter y value:");
    scanf("%d",&y);
    
      printf("enter z value:");
    scanf("%d",&z);
    
    if( (x > y) && (x > z) ){
        
        printf("x is max %d",x);
    }
    else if( (y > x) && (y > z) ){
        printf("y is max %d",y);
    }
    else{
        printf("z is max %d",z);
    }
    return 0;
    
}
