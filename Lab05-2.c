#include <stdio.h>

int main() {
    short s = -12345;
    int i = 2147483647;
    float f = 123456.789e5;
    double d = 123456.789e5;

    int test1 = (int)s;
    unsigned short test2 = (unsigned short)s;
    unsigned int test3 = (unsigned int)s;
    float test4 = (float)s;
    short test5 = s << 2;
    short test6 = s >> 2;
    unsigned short test7 = ((unsigned short)s) << 2;
    unsigned short test8 = ((unsigned short)s) >> 2;

    short i_to_s = (short)i;
    unsigned short i_to_us = (unsigned short)i;
    unsigned int i_to_ui = (unsigned int)i;
    float i_to_f = (float)i;

    double f_to_d = (double)f;
    float d_to_f = (float)d;

    printf("Test1: %d, 0x%X\n", test1, test1);
    printf("Test2: %u, 0x%X\n", test2, test2);
    printf("Test3: %u, 0x%X\n", test3, test3);
    printf("Test4: %f\n", test4);
    printf("Test5: short<<2: %d, 0x%X; short>>2: %d, 0x%X; ushort<<2: %u, 0x%X; ushort>>2: %u, 0x%X\n",
           test5, test5, test6, test6, test7, test7, test8, test8);

    printf("i to short: %d, 0x%X\n", i_to_s, i_to_s);
    printf("i to unsigned short: %u, 0x%X\n", i_to_us, i_to_us);
    printf("i to unsigned int: %u, 0x%X\n", i_to_ui, i_to_ui);
    printf("i to float: %f\n", i_to_f);

    printf("f to double: %lf\n", f_to_d);
    printf("d to float: %f\n", d_to_f);

    return 0;
}

