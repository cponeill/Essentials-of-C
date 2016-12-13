/* Adding hash-include function */
#include <stdio.h>

int add_sum(int a, int b) {

    int number;
    number = a + b;
    return number;

}

void main(void) {

    int x = 10;
    int y = add_sum(x, 5);
    printf("When we add %d and 5 we get %d.\n", x, y);

}

