/*
Write a menu-driven program to implement arithmetic operations such as +, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.
For example,
Output:
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0
*/

#include<stdio.h>
#include "menu_function.c"

void main()
{
	printf("Press 1 for +..\n");
	printf("Press 2 for -..\n");
	printf("Press 3 for *..\n");
	printf("Press 4 for /..\n");
	printf("Press 5 for %..\n");
	printf("Press 0 for exit..\n");
	
	choiceInput();
}

