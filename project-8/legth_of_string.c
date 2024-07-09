#include <stdio.h>


void main()
{
    char string[200];

    printf("Enter any string : ");
    scanf("%[^\n]", &string);

    int len = 0;
    int *length;

    for (int i = 0; string[i] != '\0'; i++)
    {
        len++;
    }

    length = &len;

    printf("\n");
    printf("String length is %d", *length);
}