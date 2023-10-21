//write a program to check wheather a number is prime number or not
#include<stdio.h>
main()
{
	int number,i,count=0;
	printf("enter the number:");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		if(number%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("prime number");
	}
	else
	{
		printf("Not a prime number");
	}
}
