/* Adding hash-include function */
#include <stdio.h>

void correct_answer() {
    printf("The answer you have chosen is correct.\n");
}

void incorrect_answer() {
    printf("The answer you have  chosen is incorrect. YOU ARE WRONG.\n");
}

int add_two_numbers(int a, int b) {
    int result = a + b;
    return result;
}


void main (void) {
    int a = 2;
    int b = 3;
    int result = add_two_numbers(a, b);

    int conditional = 5;
    if (conditional == result)
        correct_answer();
    else
        incorrect_answer();
}
