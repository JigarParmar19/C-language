#include<stdio.h>

void leapyear(int st,int end);

void main()
{
	int x,z;
	printf("Enter First Year : ");
	scanf("%d",&x);
	printf("Enter Second Year : ");
	scanf("%d",&z);
	
	printf("Leap year :");
	leapyear(x,z);
}

void leapyear(int st,int end)
{
	if(st <= end)
	{
		if( st % 4 == 0)	
		{
			printf("%d\a\n\n",st);	
		}
		st++;
		leapyear(st,end);
	}
}
