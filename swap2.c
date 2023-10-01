//swapping of two number without third variable
#include<stdio.h>
main()
{
	int value1=100;
	int value2=200;
	printf("before swapping of two number %d %d",value1,value2);
	value1=value1+value2;
	value2=value1-value2;
	value1=value1-value2;
	printf("\nafter swapping of two number %d %d",value1,value2);
}
