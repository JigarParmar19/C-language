#include<stdio.h>

main()
{
	  int number;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);


    if (number < 0) {
        printf("Error! Factorial of a negative number doesn't exist.");
    }
    else {
        while (number > 0) {
            factorial *= number;
            number--;
        }
        printf("Factorial = %llu", factorial);
    }

    return 0;
}
