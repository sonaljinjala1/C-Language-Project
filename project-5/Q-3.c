#include <stdio.h>
main()
{
    int rows, cols;
    printf("Enter array's row size:");
    scanf("%d", &rows);
    printf("Enter array's column size:");
    scanf("%d", &cols);
    int matrix[rows][cols];
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("a[%d][%d] =",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nEntered Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    // logic
    int transpoze[rows][cols];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            transpoze[j][i] = matrix[i][j];
        }
    }
    printf("\nTranspoze Matrix:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ",transpoze[i][j]);
        }
        printf("\n");
    }
}