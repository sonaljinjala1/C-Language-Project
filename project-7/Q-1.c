#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    return a / b;
}

int per(int a, int b)
{
    return (b * 100) / a;
}

int  main()
{
    int choice = 1, a = 1, b = 1;
    for (int i = 0; choice != 0; i++)
    {

        printf("\n\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            break;
        }

        printf("Enter first number\t: ");
        scanf("%d", &a);

        if (a == 0)
        {
            break;
        }
        printf("Enter second number\t: ");
        scanf("%d", &b);
        if (a == 0)
        {
            break;
        }
        switch (choice)
        {
        case 1:
            printf("\nAddition of %d and %d is %d\n", a, b, add(a, b));
            break;

        case 2:
            printf("\nSubtraction of %d and %d is %d\n", a, b, sub(a, b));
            break;

        case 3:
            printf("\nMultiplication of %d and %d is %d\n", a, b, mul(a, b));
            break;

        case 4:
            printf("\nDivision of %d and %d is %d\n", a, b, div(a, b));
            break;

        case 5:
            printf("\nAddition of %d and %d is %d\n", a, b, add(a, b));
            break;
        case 0:
            break;
        }
    }
}