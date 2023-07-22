#include<stdio.h>
int main(void)
{	int  i,a,b;
	int result=0;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	for (i=1; i<=b; i++)
	{
		result =result + a;
	}
	printf("%d * %d = %d\n",a,b,result);
	return 0;
}
