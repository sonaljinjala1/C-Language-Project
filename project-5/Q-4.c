#include <stdio.h>
main()
{
    int row, col, c, b;
    int sum = 0;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n\nEnter row number:");
    scanf("%d", &b);
    printf("Elements of row is :");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (b == i)
            {
                printf("%d ", a[i][j]);
            }
        }
    }
    for (int j = 0; j < col; j++)
    {
        sum = sum + a[b][j];
    }
    printf("Sum of row is : %d\n\n", sum);
    
    sum=0;
    printf("\n\nEnter column number:");
    scanf("%d", &c);
    printf("Elements of column is :");
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (c == j)
            {
                printf("%d ", a[i][j]);
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        sum = sum + a[i][c];
    }
    printf("Sum of column is : %d\n\n", sum);
}