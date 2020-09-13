#include <stdio.h>
main ()
{
	int marks;
	printf("Enter your marks: "); 
	scanf("%d",&marks); //input of marks scored
	//if-else-if ladder
	if(marks>=85)
	{
		printf("\nGrade A");
	}
	else if(marks>=70)
	{
		printf("\nGrade B");
	}
	else if (marks>=55)
	{
		printf("\nGrade C");
	}
	else if(marks>=40)
	{
		printf("\nGrade D");
	}
	else
	{
		printf("\nGrade F");
	}
}
