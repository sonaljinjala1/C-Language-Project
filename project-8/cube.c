#include <stdio.h>


int cube(int size)
{
    size = size * size * size;
    return size;
}

void main()
{
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);

    int array[n][n], *ptr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter a[%d][%d] : ", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            array[i][j] = cube(array[i][j]);
            ptr[i][j] = &array[i][j];
        }
    }
    printf("Cube of array :\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", *ptr[i][j]);
        }
        printf("\n");
    }
}