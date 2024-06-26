#include <stdio.h>
main()
{
	int a,b;

	printf("Enter the value of A :");
	scanf("%d",&a);

	printf("Enter the value of B :");
	scanf("%d",&b);

	printf("\nBefore Swapping\n\n");

	printf("A\t:%d\n",a);
	printf("B\t:%d",b);

	a = a*b;
	b = a/b;
	a = a/b;

	printf("\n\nAfter Swapping\n\n");

	printf("A\t:%d\n",a);
	printf("B\t:%d",b);

	
}
