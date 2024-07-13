
void choiceInput()
{
	do
	{
		int choice;
		printf("Enter Your choice: ");
		scanf("%d",&choice);
	
		int first,second;
		
		switch(choice)
		{
			case 1:
				printf("\nEnter First number: ");
				scanf("%d",&first);
				printf("Enter second number: ");
				scanf("%d",&second);
				
				printf("\nThe Addition of %d and %d ==> %d\n\n",first,second,add(first,second));
				break;
			
			case 2:
				printf("\nEnter First number: ");
				scanf("%d",&first);
				printf("Enter second number: ");
				scanf("%d",&second);
				
				printf("\nThe Substraction of %d and %d ==> %d\n\n",first,second,sub(first,second));
				break;
	
			case 3:
				printf("\nEnter First number: ");
				scanf("%d",&first);
				printf("Enter second number: ");
				scanf("%d",&second);
				
				if(first==0 || second==0)
				{
					printf("\nYou can't multiply number with 0..!");
				}
				else
				{
					printf("\nThe Multiplication of %d and %d ==> %d\n\n",first,second,mul(first,second));
				}
				break;
			
			case 4:
				printf("\nEnter First number: ");
				scanf("%d",&first);
				printf("Enter second number: ");
				scanf("%d",&second);
				
				if(first==0 || second==0)
				{
					printf("\nYou can't divide number with 0..!");
				}
				else
				{
					printf("\nThe Division of %d and %d ==> %d\n\n",first,second,div(first,second));
				}
				break;
			
			case 5:
				printf("\nEnter First number: ");
				scanf("%d",&first);
				printf("Enter second number: ");
				scanf("%d",&second);
				
				printf("\nThe Modulas of %d and %d ==> %d\n\n",first,second,mod(first,second));
				break;
			
			case 0:
				printf("\n\n\n!..You're exited..!");
				return 0;
			
			default:
				printf("Enter valid choice..!");
				break;
			
		}
	}while(1);
	
}

int add(int first, int second)
{
	return first + second;
}

int sub(int first, int second)
{
	return first - second;
}

int mul(int first, int second)
{
	return first * second;
}

int div(int first, int second)
{
	return first / second;
}

int mod(int first, int second)
{
	return first % second;
}

