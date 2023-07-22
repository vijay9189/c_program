#include<stdio.h>
int main(void)
{
	int num,larger;
	int i=1;
	printf("enter the 10 numbers:\n");
	scanf("%d",&num);
	larger = num;
	for (i=1; i<=9; i++)
	{
		scanf("%d",&num);
		if(num > larger)
			larger =num;
	}
	printf("%d is larger number is\n ",larger);
	return 0;
}
