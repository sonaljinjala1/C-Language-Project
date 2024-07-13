/*
Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.
*/

#include <stdio.h>

struct studInfo {
	int rollNo;
	char name[20];
	int chemistry;
	int maths;
	int physics;
};

void main()
{
	int n;
	
	printf("Enter number of students: ");
	scanf("%d",&n);
	
	struct studInfo s1[n];
	int i;
	
	for(i=0; i<n; i++)
	{
		printf("\n");
		printf("Enter your roll no: ");
		scanf("%d",&s1[i].rollNo);
		fflush(stdin);
		printf("Enter your name: ");
		gets(s1[i].name);
		printf("Enter Chemistry Marks :- ");
		scanf("%d",&s1[i].chemistry);
		printf("Enter Mathematics Marks :- ");
		scanf("%d",&s1[i].maths);
		printf("Enter Physics Marks :- ");
		scanf("%d",&s1[i].physics);
	}
	printf("\n\n\n");
	
	FILE *fp;
	fp = fopen("markSheet.txt","w");
	
	int total=0;
	float per;
	
	if(fp!=NULL){
		for(i=0; i<n; i++){	
		
			total = s1[i].chemistry + s1[i].maths + s1[i].physics;
			per = (float)total*100/300;
			
			printf("\n\n");
			printf("%s (%d)\n",s1[i].name,s1[i].rollNo);
			printf("Chemistry :- %d\n",s1[i].chemistry);
			printf("Mathematics :- %d\n",s1[i].maths);
			printf("Physics :- %d\n",s1[i].physics);
			printf("Total :- %d\n",total);
			printf("Percentage :- %.2f",per);
			
			fprintf(fp,"\n\n");
			fprintf(fp,"%s (%d)\n",s1[i].name,s1[i].rollNo);
			fprintf(fp,"Chemistry :- %d\n",s1[i].chemistry);
			fprintf(fp,"Mathematics :- %d\n",s1[i].maths);
			fprintf(fp,"Physics :- %d\n",s1[i].physics);
			fprintf(fp,"Total :- %d\n",total);
			fprintf(fp,"Percentage :- %.2f",per);
		}
		
		fclose(fp);
	}
	else{
		printf("File doesn't open..!");
	}
	
	
}
