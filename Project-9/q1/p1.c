/*
Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files. 

Output:
Even numbers from even_file.txt:
50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70

Odd numbers from odd_file.txt:
51, 53, 55, 57, 59, 61, 63, 65, 67, 69
*/

#include <stdio.h>

int main() {
	
    FILE *evenFp, *oddFp;
    int i;

    evenFp = fopen("evenNumbers.txt", "w");
    oddFp = fopen("oddNumbers.txt", "w");
    
    int n1,n2;
    
    printf("Enter first number :- ");
    scanf("%d",&n1);
    printf("Enter second number :- ");
    scanf("%d",&n2);

    if (evenFp!='\0' || oddFp!='\0') 
	{
		printf("File Successfully Opened..!");
		
        fprintf(evenFp, "Even Numbers are :- \n");
    	fprintf(oddFp, "Odd Numbers are :- \n");
    	
	    for (i = n1; i <= n2; i++) 
		{
	        if (i % 2 == 0) 
			{
	            fprintf(evenFp, "%d", i);
	            if (i != n2){
	            	fprintf(evenFp, ", ");
				}
	        }
			else 
			{
	            fprintf(oddFp, "%d", i);
	            if (i != n2-1){
	            	fprintf(oddFp, ", ");
				}
	        }
	    }
	    
	    fclose(evenFp);
	    fclose(oddFp);
    }
    else{
    	printf("File doesn't open..!");
	}
}

