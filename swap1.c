//swapping of two number using 3rd variable
#include<stdio.h>
main()
{
	int value1=100;
	int value2=200;
	printf("before swapping of two number %d %d",value1,value2);
	int temp;
	temp=value1;
	value1=value2;
	value2=temp;
	printf("\nafter swapping of two number %d",value1,value2);
}
