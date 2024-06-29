#include <stdio.h>

main()
{
    int row, col, b=0;

    printf("Enter the number of rows: ");
    scanf("%d", &row);
    printf("Enter the number of columns: ");
    scanf("%d", &col);

    int a[row][col];

    printf("\n\nFor array A\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a[%d][%d]:", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (b < a[i][j])
            {
                b = a[i][j];
            }
        }
    }
    printf("The maximum no. is %d", b);
}