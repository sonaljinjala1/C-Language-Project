#include <stdio.h>

main()
{
    int cmp, len = 0;
    char a[20], fre[20];

    printf("Enter any string : ");
    scanf("%[^\n]", &a);

    for (int i = 0; a[i] != '\0'; i++)
    {
        len++;
    }

    printf("\nFrequency of each letter : \n");

    for (int i = 0; i < len; i++)
    {
        int n = 1;
        for (int j = i + 1; j < len; j++)
        {
            if (a[i] == a[j])
            {
                n++;
                a[j] = '\0';
            }
        }
        if (a[i] != '\0')
        {
            printf("\n %c => %d", a[i], n);
        }
    }
}