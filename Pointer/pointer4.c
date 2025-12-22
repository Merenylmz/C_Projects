#include <stdlib.h>
#include <stdio.h>

int main() {

    short number = 10, *p1, *x, y;
    p1 = &number;
    x = p1;
    y = number;
    printf("X: %d, Y: %d\n", *x, y);
    (*p1)++;
    printf("X: %d, Y: %d\n", *x, y);

    return 0;
}