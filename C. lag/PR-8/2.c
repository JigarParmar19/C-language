#include<stdio.h>

void cube(int n,int *ptr[n][n])
{
	int i,j;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",(*ptr[i][j])*(*ptr[i][j])*(*ptr[i][j]));
		}
		printf("\n");
	}
}

  
void main()
{
	int n,i,j;
	
	printf("Enter Row and col : ");
	scanf("%d",&n);
	
	int a[n][n];
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		cube(n,&a[n][n]);
}
