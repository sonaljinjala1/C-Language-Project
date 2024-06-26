#include <stdio.h>

main()
{
	int unit;
	float total;

	printf("enter number of unit :");
	scanf("%d",&unit);
	if(unit<=50)
	{
		total=unit*0.5;
	}
	else if(unit<=150)
	{
		total=((unit-50)*0.75)+(50*0.5);
	}
	else if (unit<=250)
	{
		total=((unit-150)*1.20)+(50*0.5)+(100*0.75);
	}
	else
	{
			total=((unit-250)*1.50)+(50*0.5)+(100*0.75)+(100*1.20);

	}
	total=total+(total* 0.2);

	printf("Electricity Bill is %.2f :",total);

}