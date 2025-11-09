#include <stdio.h>

int div32(int x) {
    int bias = (x >> 31) & 31;
    return (x + bias) >> 5;
}

int main() {
    printf("%d\n", div32(64));
    printf("%d\n", div32(-64));
    printf("%d\n", div32(33));
    printf("%d\n", div32(-33));
    return 0;
}

