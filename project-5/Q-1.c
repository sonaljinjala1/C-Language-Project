#include <stdio.h>


main()
{
    int n, j;
    printf("Enter array size : ");
    scanf("%d", &n);
    int a[n];
    int neg[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter a number[%d] : ", i);
        scanf("%d", &a[i]);
    }
    printf("\n\nNegative number. is ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            printf(" %d  ", a[i]);
        }
    }
}