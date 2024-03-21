#include<stdio.h>

main()
{
	int i,s;
	
	printf("Enter Size of array : ");
	scanf("%d",&s);
	int a[s];
	
	printf("\n\n");
	for(i=0;i<s;i++)
	{
		printf("Enter Value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n--:  The Squares  :--\n ");
	for(i=0;i<s;i++)
	{
		printf("%d\t ",a[i]*a[i]);
	}
}

