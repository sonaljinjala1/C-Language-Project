#include <stdio.h>

main()
{
	long int a, b, c = 0, d;

	printf("Enter any number between 1 to 9 : ");
	scanf("%ld", &a);

	printf("\nEnter number of time of sequences repeatation : ");
	scanf("%ld", &b);

	d = a;

	if (a < 10)
	{
		printf("\nsequence is : \n");
		while (c <= b)
		{
			a = (a * 10) + d;
			printf(" %ld=>%ld ", c, a);
			c++;
		}
	}
	else
	{
		printf("Invalid number.......");
	}
}