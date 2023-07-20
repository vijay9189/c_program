#include<stdio.h>
int main(void)
{
	float radius , area, perimeter;
	printf("enter the radius of thr circle:");
	scanf("%f",&radius);
	area = 22.0/7 * radius * radius;
	perimeter = 2 * 22.0/7  * radius;
	printf("are of circle is %f \n", area);
	printf("perimeter of circle is %f:", perimeter);
	return 0;

}
