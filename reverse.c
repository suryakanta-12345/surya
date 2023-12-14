//write a program to find the reverse of number
#include<stdio.h>
main()
{
	int n=567,rem,reverse=0;
	while(n!=0)
	{
		rem=n%10;
		reverse=reverse*10+rem;
		n=n/10;
	}
	    printf("The reverse number of 567 is %d",reverse);

}
