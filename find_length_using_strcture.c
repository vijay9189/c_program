#include<stdio.h>
#include<math.h>

int main(){
    double length;
    
    struct point{
        
        double x;
        double y;
    };
    
    struct line{
        
        struct point p1;
        struct point p2;
    };
    
    struct line line1;
    
    printf("enter the point 1 x:");
    scanf("%lf",&line1.p1.x);
    
    printf("enter the point 1 y:");
    scanf("%lf",&line1.p1.y);
    
    printf("enter the point 2 y:");
    scanf("%lf",&line1.p2.x);
    
    printf("enter the point 2 y:");
    scanf("%lf",&line1.p2.y);
    
    length = sqrt( pow((line1.p2.y - line1.p1.y),2)  +  pow((line1.p1.x - line1.p1.x),2) ) ;

    printf("length is = %lf\n",length);
    
    return 0;
    
    
    
}