#include <stdio.h>

void main (void) {
    int x;
    int *p;

    p = &x;
    scanf("%d", &x);
    printf("%d\n", *p);
    getchar();
}
