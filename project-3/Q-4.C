#include <stdio.h>

main()
{
	int a, b, sum = 0, mul = 1;;

	printf("Enter any number : ");
	scanf("%d", &a);

	while (a != 0)
	{
		b = a % 10;
		sum += b;
		mul *= b;
		a = a / 10;
	}

	if (sum == mul)
	{
		printf("This number  is magic number....");
	}
	else
	{
		printf("This number is not magic number....");
	}

	
}