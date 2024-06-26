#include <stdio.h>
#define pf printf
main()
{

	char ch;

	pf("S  for sunday\n");

	pf("M  for monday\n");
	pf("T  for tuesday\n");

	pf("W  for wednesday\n");
	pf("t  for thusday\n");

	pf("F  for friday\n");
	pf("s  for saturday\n");

	pf("Enter any character of this :");
	scanf("%c",&ch);

	switch(ch)
	{
		case 'S':pf("\nSunday");
			break;
		case 'M':pf("\nMonday");
			break;
		case 'T':pf("\nTuesday");
			break;
		case 'W':pf("\nWednesday");
			break;
		case 't':pf("\nThusday");

			break;
		case 'F':pf("\nFriday");
			break;
		case 's':pf("\nSaturday");
			break;
		default :
			pf("Invalid value...");
	}


}