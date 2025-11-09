#include <stdio.h>

void xor_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

int main() {
    int a = 5, b = 9;
    printf("Before swap: a=%d, b=%d\n", a, b);
    xor_swap(&a, &b);
    printf("After swap: a=%d, b=%d\n", a, b);
    return 0;
}

