//write a program find the number is palindrium or not.
#include<stdio.h>
main()
{
	int number,c,r,sum=0;
	printf("enter the number:");
	scanf("%d",&number);
	c=number;
	while(number>0)
	{
		r=number%10;
		sum=r+(sum*10);
		number=number/10;
	}
	if(c==sum)
	{
		printf("palindrium number");
	}
	else
	{
		printf("Not a palindrium number");
	}
}
