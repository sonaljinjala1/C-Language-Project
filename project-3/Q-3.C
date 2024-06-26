#include <stdio.h>

main()
{
	int n=0,first,last,sum;
	
	printf("Enter any number :");
	scanf("%d",&n);
	last=n%10;
	while(n>10)
	{
		n=n/10;
	}
	first=n;
	sum=first+last;
	printf("The sum of first and last digit is : %d",sum);

}