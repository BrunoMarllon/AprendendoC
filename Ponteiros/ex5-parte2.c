#include <stdio.h>
#define MAX 100

int main() {
    int x1 = 1, x2 = 2, *ptr;
    ptr = &x1;
    x1 = 5;
    x2 = (*ptr) + 10;
    x1 = 9;

    printf("x1: %d, x2: %d, ptr: %d", x1, x2, *ptr);

    return 0;
}