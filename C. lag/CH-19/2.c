#include<stdio.h>

void main()
{
	int a,b;
	int *x=&a,*y=&b;
	
	printf("enter a\t :");
	scanf("%d",&a);
	printf("enter b\t :");
	scanf("%d",&b);	
	
	*x = *x + *y;
	*y = *x - *y;
	*n = *x - *y;
	printf("\na\t: %d\n",a);
	printf("b\t: %d\n",b);
}
