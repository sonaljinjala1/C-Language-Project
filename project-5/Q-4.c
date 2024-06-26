#include <stdio.h>
main()
{
    int rows, cols;
    printf("Enter the array's row size:");
    scanf("%d", &rows);
    printf("Enter the array's col size:");
    scanf("%d", &cols);

    int array[rows][cols];
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("a[%d][%d] =", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    int rowNum, colNum;
    printf("Enter row number:");
    scanf("%d", &rowNum);

    if (rowNum >= 0 && rowNum < rows)
    {
        int rowSum = 0;
        printf("Elements of row %d :", rowNum);
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", array[rowNum][j]);
            rowSum += array[rowNum][j];
        }
        printf("\nThe sum of row %d : %d\n", rowNum, rowSum);
    }
    else
    {
        printf("Invalid row number !!!\n");
    }

    printf("Enter column number %d :",colNum);
    scanf("%d",&colNum);
    if (colNum >=0 && colNum<cols)
    {
        int colSum=0;
        printf("Elements of column %d :",colNum);
        for (int i = 0; i < rows; i++)
        {
            printf("%d ",array[i][colNum]);
            colSum += array[i][colNum];
        }
        printf("\nThe sum of column %d : %d\n",colNum,colSum);
    }
    else
    {
        printf("Invalid column number !!!\n");
    }
}