#include <stdio.h>

int main() {
    unsigned x = 0x12345678;
    int n = sizeof(unsigned) * 8;

    unsigned test1 = x & (0xFF << (n - 8));
    unsigned test2 = x & 0xFF;
    unsigned test3 = (~x) & (~0xFF);
    unsigned test4 = x | 0xFF;

    printf("x = 0x%X\n", x);
    printf("1: 0x%X\n", test1);
    printf("2: 0x%X\n", test2);
    printf("3: 0x%X\n", test3);
    printf("4: 0x%X\n", test4);

    return 0;
}

