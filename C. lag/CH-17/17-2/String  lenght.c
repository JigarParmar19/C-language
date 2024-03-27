#include<stdio.h>

int length(char a[]);

void main()
{
	int len;
	char i[20];
	printf("Enter Any Word : ");
	gets(i);
	printf("Lenght Of Word : %d",lenght(i));
}
int  lenght(char i[])
{
	return strlen(i);
}
