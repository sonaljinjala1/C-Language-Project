#include <stdio.h>

main()
{
      int num,i,s=0;
    
      printf("Enter number of term :");
      scanf("%d",&num);
      for(i=0;i<num;i++)
      {
		s=s*10+1;
		printf("%d\t",s);

      }

}