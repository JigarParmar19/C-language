#include<stdio.h>

main()
{
	
	int r,c;
	
	printf("enter the row:");
	scanf("%d",&r);
	
	printf("enter the colum:");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],d[r][c],i,j,h;
	
	printf("enter the array A:");
	
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
			h+=a[i][j];
		}
	}
	
	
	printf("enter the array B:");
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
			h+=b[i][j];
		}
	}
	
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
			printf("sum : %d",d[i][j]);
			printf("\n");
		}
	}
}
