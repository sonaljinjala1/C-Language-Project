#include <stdio.h>

main()
{
    int row, col;
    printf("Enter number of rows :");
    scanf("%d", &row);
     printf("Enter number of column :");
    scanf("%d", &col);
    col=row;
    int a[row][col];
    printf("\n\nArray input\n\n");
    for ( int i = 0; i < row; i++)
    {
        for ( int j = 0; j < col; j++)
        {
            printf("Enter a[%d][%d] : ", i,j);
            scanf("%d", &a[i][j]);
        }
    printf("\n");
    }
    printf("\n\nOutput\n\n");
for ( int i = 0; i < row; i++)
    {
        for ( int j = 0; j < col; j++)
        {
            printf("%d ",a[j][i]);
        }
    printf("\n");
    }
}