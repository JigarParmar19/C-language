#include<stdio.h>
main()
{
	int i,j;
	
	for(i=6;i<=10;i++)
     {
     	for(j=10;j>=i;j--)
     	{
     		printf("%d",j);

		 }
		 printf("\n");
	 }
	 
	 return 0;
}