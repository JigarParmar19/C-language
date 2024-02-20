#include<stdio.h> 
#include<conio.h>
main()
 {
    int n,i,t = 1; 
    clrscr();

    printf("Enter any number : ");
    scanf("%d", &n); 

    for(i = 1; i <= n; i++) 
    {
        printf("%ld,", t); 
	    t = (t * 10) + 1;
    }

   getch();
}