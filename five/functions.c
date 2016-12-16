/* Adding hash-include function */
#include <stdio.h>

int multiply_numbers(int a, int b, int c) {
    int result = a * b * c;
    return result;
}


void main (void) {
    int a = 2;
    int b = 3;
    int answer = multiply_numbers(a, b, 4);
    printf("When you multiply %d by %d by 4 your get %d.\n", a, b, answer);
}
