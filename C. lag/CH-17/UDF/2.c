#include<stdio.h>
void binary(int n,int m[],int x,int b);

void main()
{
	int a,b,c;
	int m[9];
	printf("Enter Any Number : ");
	scanf("%d",&a);
	binary(a,m,0,0);
}
void binary(int a,int x[],int z,int b)
{
	int i=0;
	while(a!=0)
	{
		x = a%2;
		a /= 2;

		m[i]=z;
		i++;
	}
	for(i=i-1;i>=0;i--)
	{
			printf("%d",m[i]);	
	}
	
}

