#include<stdio.h>

main()
{
	int a,b,i;
	
	printf("Enter Array 01 size : ");
	scanf("%d",&a);
	int a[a];
	
	printf("Enter Array 02 size : ");
	scanf("%d",&b);
	int b[b],merge[a+b];
	
	printf("\n\n--: ARRAY-01 :--\n\n");
	
	for(i=0;i<a;i++)
	{
		printf("Enter Array a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n--: ARRAY-02 :--\n\n");
	
	for(i=0;i<b;i++)
	{
		printf("Enter Array b[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<a;i++)
	{
		merge[i] = a[i];
	}
	
	for(i=0;i<a+b;i++)
	{
		merge[i+a] = b[i];
	}
	
	printf("\n\n--: MERGED ARRAY :--\n\n");
	
	for(i=0;i<a+b;i++)
	{
		printf("Merge[%d] = %d\n",i,merge[i]);
	}
}
