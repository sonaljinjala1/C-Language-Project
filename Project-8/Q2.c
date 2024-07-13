//Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.

#include<stdio.h>

int cube(int ptr){
	return ptr * ptr * ptr;	
}

main(){
	int r,c;
	
	printf("Enter size of ROWS :- ");
	scanf("%d",&r);
	printf("Enter size of COLUMNS :- ");
	scanf("%d",&c);
	
	int arr[r][c];
	int i,j;
	int *ptr[r][c];
	
	for(i=0 ; i<r ; i++){
		for(j=0 ; j<c ; j++){
			printf("Enter Array[%d][%d] :- ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0 ; i<r ; i++){
		for(j=0 ; j<c ; j++){
			ptr[i][j] = &arr[i][j];
		}
	}
	
	printf("Your Elements :- \n");
	
	for(i=0 ; i<r ; i++){
		for(j=0 ; j<c ; j++){
			printf("%d  ",*ptr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nConverted in Cubes element :- \n");
	
	for(i=0 ; i<r ; i++){
		for(j=0 ; j<c ; j++){
			printf("%d  ",cube(*ptr[i][j]));
		}
		printf("\n");
	}
}
