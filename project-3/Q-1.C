#include <stdio.h>

main()
{
	int i;
	char a = 'a';

	printf("Enter The Gap Between Alphabet : ");
	scanf("%d", &i);
	printf("\n");

	while (a <= 'z')
	{
		if (i <= 9)
		{
			printf("%c\t", a);
			a = a + i;
		}
		else
		{
			printf("Invalid number.....");
		}
	}
}