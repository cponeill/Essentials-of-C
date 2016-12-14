/* Adding hash-include function */
#include <stdio.h>

int add_numbers(int a, int b) {
    int answer;
    answer = a + b;
    return answer;
}

void correct_answer() {
    printf("The answer you provided is correct.\n");
}

void wrong_answer() {
    printf("The answer is incorrect. Please try again.\n");
}


void main (void) {
    int a = 1;
    int b = 2;

    int var = add_numbers(a, b);

    if (var == 3)
        correct_answer();
    else
        wrong_answer();
}
