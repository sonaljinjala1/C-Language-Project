#include <stdio.h>
main()
{
	int a,b;

	printf ("Enter your base salary :");
	scanf("%d",&a);
	printf("HRA is 10\n");
	printf("DA is 5\n");
	printf("TA is 8\n\n");
	b=(a*10/100)+(a*5/100)+(a*8/100)+a;
	printf("Rs is\t : %d",b);

}