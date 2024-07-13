//Write a Program to find the length of a string using a Pointer.

#include<stdio.h>
#include<string.h>

int main() {
    char str[20];

    printf("Enter a string: ");
    gets(str);

    char *ptr;
    int i,length=0;

    ptr = str;
    
	do{
		length++;
		*ptr++;
	}while(*ptr!='\0');

    printf("Length of '%s' is :- %d",str,length);
}
