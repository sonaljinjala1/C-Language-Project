#include<stdio.h>

main(){
	int r;
	
	printf("Enter the size of rows :- ");
	scanf("%d",&r);
	
	int arr[r];
	int i;
	
	for(i=0 ; i<r ; i++){
		printf("Enter Array[%d] :- ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n\nYour elements :- \n");
	for(i=0 ; i<r ; i++){
		printf("%d ",arr[i]);
		printf("\n");
	}
	
	int rev;
	
	printf("\n\nReversed elements :- \n");
	for(i=0 ; arr[i]!=0 ; i++){
		rev = rev *10 + (arr[i]%10);
		printf("%d\n",arr[i]);
		arr[i]/=10;
	}
}
