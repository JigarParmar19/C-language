#include<stdio.h>
void divisible (int i);

void main()
{
	int a;
	printf("Enter any number :");
	scanf("%d",&a);	
	
	divisible (a);
}
void divisible (int i)
{
	if(x%3==0 && x%5==0)
	{
		printf("Number is divisible by 3 and 5");
	}
	else
	{
		printf("Number is not divisible by 3 and 5");
	}
}
