#include <stdio.h>
#define pf printf
main()
{       int a,b,c,d;

	
	pf("Enter first number :");
	scanf("%d",&a);
	pf("Enter second number :");
	scanf("%d",&b);
	pf("Enter third number :");
	scanf("%d",&c);
	pf("Enter fourth number :");
	scanf("%d",&d);

	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				pf("%d is max",a);
			}
			else
			{
				pf("%d is max",d);
			}
		}
		else
		{
			if(c>d)
			{
				pf("%d is max",c);
			}
			else
			{

				pf("%d is max",d);
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				pf("%d is max",b);
			}
			else
			{
				pf("%d is max",d);
			}
		}
		else
		{
			if(c>d)
			{
				pf("%d is max",c);
			}
			else
			{

				pf("%d is max",d);
			}
		}
	}



}