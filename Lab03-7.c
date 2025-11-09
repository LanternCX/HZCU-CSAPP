#include <stdio.h>

int main() {
    float f;
    unsigned int *p;

    scanf("%f", &f);
    p = (unsigned int*)&f;

    for(int i = 31; i >= 0; i--) {
        printf("%d", (*p >> i) & 1);
        if(i == 31 || i == 23) printf(" ");
    }
    printf("\n");

    return 0;
}

