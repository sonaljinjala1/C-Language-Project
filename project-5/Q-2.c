#include<stdio.h>
main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int value[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
    {
       printf("a[%d] =",i);
       scanf("%d",&value[i]);
    }
    int max=value[0];
    for (int i = 1; i < n; i++)
    {
        if (value[i]>max)
        {
            max=value[i];
        }
        
    }
    printf("\nGiven values:\n");
    for (int i = 0; i < n; i++)
    {
       printf("%d\t",value[i]);
    }
    printf("\n\n");
    printf("The maximum value  is : %d",max);

}