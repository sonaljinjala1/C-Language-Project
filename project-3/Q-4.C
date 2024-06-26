#include <stdio.h>

main()
{
	int n, rem, mul = 1, sum = 0;

	printf("Enter any number :");
	scanf("%d", &n);
	while (n != 0)
	{
		rem = n % 10;
		sum += rem;
		mul *= rem;
		break;
		n /= 10;
	}

	if (sum == mul)
	{
		printf("\n%d is magic number", n);
	}
	else
	{
		printf("\n%d is not a magic number !!!", n);
	}
}