#include <stdio.h>

void cube(int *num) {
    *num = (*num) * (*num) * (*num);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int *ptr = &number;

    cube(ptr);

    printf("Cube of %d is %d\n", number, *ptr);

    return 0;
}