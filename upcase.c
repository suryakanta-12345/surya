//write aprogram to find if a character entered by the user is uppercase or lowercase letter
#include<stdio.h>
main()
{
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("uppercase letter");
	}
	else if(ch>='a'&&ch<='z')
	{
		printf("lowercase letter");
	}
	else
	{
		printf("invalid");
	}
}
