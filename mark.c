/*write a program to check if a student pass or fail.
mark>30 is pass
mark<=30 is failed*/
#include<stdio.h>
main()
{
	int mark;
	printf("enter the mark:");
	scanf("%d",&mark);
	if(mark>30)
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
}
