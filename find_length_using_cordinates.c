// find the lenth of line from user input using x1,y1,x2,y2 cordinates.

#include<stdio.h>
#include<math.h>

int main() {

	double x1,x2,y1,y2;
	double T1,T2;
	double lenght;

	printf("enter the x1:");
	scanf("%lf",&x1);

	printf("enter the x2:");
	scanf("%lf",&x2);

	printf("enter the y1:");
	scanf("%lf",&y1);

	printf("enter the y2:");
	scanf("%lf",&y2);


	T1 = pow ((x2-x1),2);
	T2 = pow ((y2-y1),2);

	lenght=sqrt(T1+T2);

	printf("The Lenght of Line = %lf\n",lenght);

	return 0;
}