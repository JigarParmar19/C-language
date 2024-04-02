#include<stdio.h>

void largenum(int i,int m,int a[],int size);

void main()
{
	int i,size,m;

	printf("Enter Array Size : ");
	scanf("%d",&size);

	int a[size];
	
	printf("\n\n--ARRAY INPUT--\n");

	for(i=0;i<size;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	largenum(i,m,a,size);
}

void largenum(int i,int m,int a[],int size)

{
	x = a[0];
    
	for(i=0;i<size;i++)
	{
		if(a[i]>m)
		{
			m = a[i];
		}
	}
	
	printf("\nLargest Element : %d",m);
}
