#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter Size of Arryay : ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter Value a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n--|--Array--|--\n\n");
	
	for(i=0;i<n;i++)
	{
		printf("\na[%d] : %d\n",i,a[i]);
	}
	
	printf("\nSize of Array is : %d",n);
}
