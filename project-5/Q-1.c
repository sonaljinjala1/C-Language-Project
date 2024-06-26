#include <stdio.h>
main()
{
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int values[n];
    printf("\nEnter array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] =", i);
        scanf("%d", &values[i]);
    }
    int negativeValues[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (values[i] < 0)
        {
            negativeValues[count] = values[i];
            count++;
        }
    }
    printf("\nNegative values are:");
    for (int i = 0; i < count; i++)//negative values count 
    {
        printf("%d\t", negativeValues[i]);
    }
}