#include <stdio.h>
main()
{
	float f,c;

	printf("Enter tempreture in celseus :");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("tempreture in farnheit : %f",f);
}