#include <stdio.h>
#include <string.h>
main()
{
    char name[20], rev[20];
    int len = 0, n = 0;
    int cmp = 0;
    printf("Enter name :");
    scanf("%[^\n]", &name);

    for (int i = 0; name[i] != NULL; i++)
    {
        len++;
    }
    for (int i = len - 1; i >= 0; i--)
    {
        rev[n++] = name[i];
    }
    for (int i = 0; i < len; i++)
    {
        if (name[i] == rev[i])
        {
            cmp = 0;
        }
        else
        {
            cmp = 1;
            break;
        }
    }
    if (cmp == 0)
    {
        printf("\n %s  is palindrom number ", name);
    }
    else
    {
        printf("\n %s  is not palindrom number ", name);
    }
}