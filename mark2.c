/*write a program to give grades to a student
mark<30 is grade C
30 <= mark < 70 is B grade
70 <= mark < 90 is A grade
90 <= mark < 100 is A++ grade
mark<30 is fail*/
#include<stdio.h>
main()
{
	int mark;
	printf("enter the mark:");
	scanf("%d",&mark);
	if(mark>30)
	{
		printf("C grade");
	}
	else if(30<=mark&& mark<70)
	{
		printf("B grade");
	}
	else if(70<=mark && mark<90)
	{
		printf("A grade");
	}
	else if(90<=mark && mark<100)
	{
		printf("A++ grade");
	}
    else
    {
    	printf("you are failed");
	}
}
