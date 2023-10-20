//Write a program enter a number find out its factorial
#include<stdio.h>
main()
{
	int number,fact=1,i;
	printf("enter the number:");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		fact=fact*i;
	}
	printf("factorial of a number is %d",fact);
 } 
