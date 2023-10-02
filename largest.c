//write a program to display largest number among two number
#include<stdio.h>
main()
{
	int a,b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	int x=(a>b)?a:b;
	printf("the value of largest number %d %d",x);
}
