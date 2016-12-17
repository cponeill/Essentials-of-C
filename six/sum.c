/* Addding hash-include function */
#include <stdio.h>

int sum_diff(int a, int b, int *res) {
    int sum = a + b;
    *res = a - b;
    return sum;
}

void main(void) {
    int b = 2;
    int diff;

    printf("The sum of 5 and %d is %d.\n", b, sum_diff(5, b, &diff));
    printf("The difference of 5 and %d is %d.\n", b, diff);
}

