#include<stdio.h>
int main(void)
{
	float rupees;
	float base_salary= 100;
	float hours =0;
	float salary;


	printf("enter the working hours:");
	scanf("%f",&hours);

	if(hours <= 100 )
	{
		salary = (hours * 100);
		printf("salary is %f\n",salary);
	}

	else if(hours <= 125) {

		salary=(10000 + (hours - 100) * 120);
		printf("salary is %f\n",salary);
	}
	else if(hours <=150) {
		salary=(10000 + 3000 + (hours - 125) * 150);
		printf("salary is %f\n",salary);
	}
	else if(hours <=200) {
		salary=(10000 + 3000 + 3750 + (hours - 150) * 180);
		printf("salary is %f\n",salary);
	}
	else{
		salary=(10000 + 3000 + 3750 + 9000 + (hours - 200) * 200);
		printf("salary is %f\n",salary);
	}

	printf("final salary is %f\n",salary);

	return 0;

}