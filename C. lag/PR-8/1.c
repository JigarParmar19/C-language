#include<stdio.h>
main()
{
	int len,i;
	int *ptr = &len;
	char name[20];
	
	printf("Enter name :");
	scanf("%d[^\n]",name);
	
	len=0;
	for(i=0;name[i]!='\0';i++)
	{
		len++;
	}
	printf("len of name : %d",*ptr);
}
