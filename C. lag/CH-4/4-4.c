#include<stdio.h>
#include<conio.h>
main()
{
	int x,y;
    clrscr();
	
	printf("Enter value of x: ");
	scanf("%d",&x);
	printf("Enter value of y: ");
	scanf("%d",&y);
	
	printf("(x-y)^2 : %d",(x*x)-(2*x*y)+(y*y));
	
    getch();
}