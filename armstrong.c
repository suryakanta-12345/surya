//write a program to check whether a number is armstrong number or not.
#include<stdio.h>
main()
{
	int number,r,sum=0,c;
	printf("enter the number:");
	scanf("%d",&number);
	c=number;
	while(number>0)
	{
		r=number%10;
		sum=(r*r*r)+sum;
		number=number/10;
	}
	if(c==sum)
	{
		printf("It is a armstrong number");
	}
	else
	{
		printf("It is not a armstrong number");
	}
	
}
