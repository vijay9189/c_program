#include<stdio.h>
int main(void)
{
	float celsius,fahrenheit;
	printf("enter the tempereature in celsius:");
	scanf("%f",&celsius);
	fahrenheit= (celsius * 9/5) + 32;
	printf("%.2f celsius is equal to %.2f Fahrenheit.\n", celsius , fahrenheit);
	return 0;

}
