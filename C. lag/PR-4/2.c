#include<stdio.h>
#include<conio.h>
main()
{
	int i,n=0,j;
	clrscr();

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{	
            n+=11;
			printf("%d ",n);
		}	
        printf("\n");		
	}

	getch();
}