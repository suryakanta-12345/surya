//print the sum of n natural number
#include<stdio.h>
main()
{
	int number,i=1,sum=0;
	printf("enter the number:");
	scanf("%d",&number);
	while(i<=number)
	{
		sum=sum+i;
		i++;
	}
	printf("sum of natural number %d is",sum);
}
