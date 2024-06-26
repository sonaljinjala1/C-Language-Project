#include <stdio.h>

main()
{
	char ch;

	printf("please enter a character :");
	scanf("%c",&ch);
	if(ch>=65 && ch<=90 || ch>='a' && ch <='z')
	{
		printf("%c is alphabet\n",ch);

	}
	else if (ch >='0' && ch<='9')
	{
		printf("%c is a digit\n",ch);

	}
	else
	{
		printf("%c is a special character\n",ch);

	}


}