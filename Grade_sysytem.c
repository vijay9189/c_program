#include<stdio.h>
int main(void)
{
	int marks;

	printf("enter the marks:");
	scanf("%d",&marks);

	if(marks < 50 ) {
		printf(" F\n");
	}
	
	if(marks >= 50 && marks < 60){
	    printf(" c\n");
	}
	if(marks >=60 && marks < 70){
	    printf(" B-\n");
	}
	if(marks >=70 && marks < 80){
	    printf(" B+\n");
	}
	if(marks >=80 && marks <90){
	    printf("A-\n");
	}
	if(marks >= 90 && marks <100){
	    printf("A+\n");
	}
	

// 	if( 60 >marks <= 50) {
// 		printf("C\n");
// 	}
// 	if(70 > marks <=60){
// 	    printf("B-");
// 	}

	return 0;
}