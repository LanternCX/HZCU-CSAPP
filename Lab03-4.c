#include <stdio.h>
#include <string.h>

int main() {
    int x = -32768;
    short y = 522;
    unsigned z = 65530;
    char c = '@';
    float a = -1.1f;
    double b = 10.5;

    unsigned char *p;

    printf("x: ");
    p = (unsigned char*)&x;
    for(int i=0;i<4;i++) printf("%02X ", p[i]);
    printf("\n");

    printf("y: ");
    p = (unsigned char*)&y;
    for(int i=0;i<2;i++) printf("%02X ", p[i]);
    printf("\n");

    printf("z: ");
    p = (unsigned char*)&z;
    for(int i=0;i<4;i++) printf("%02X ", p[i]);
    printf("\n");

    printf("c: ");
    p = (unsigned char*)&c;
    printf("%02X\n", *p);

    printf("a: ");
    p = (unsigned char*)&a;
    for(int i=0;i<4;i++) printf("%02X ", p[i]);
    printf("\n");

    printf("b: ");
    p = (unsigned char*)&b;
    for(int i=0;i<8;i++) printf("%02X ", p[i]);
    printf("\n");

    return 0;
}

