#include <stdio.h>
#include <float.h>

int main() {
    printf("%d\n", FLT_DIG);
    printf("%d\n", DBL_DIG);

    float f_eps = 1.0f;
    while (1.0f + f_eps != 1.0f) {
        f_eps /= 2;
    }
    f_eps *= 2;
    printf("float esp = %e\n", f_eps);

    double d_eps = 1.0;
    while (1.0 + d_eps != 1.0) {
        d_eps /= 2;
    }
    d_eps *= 2;
    printf("double eps = %e\n", d_eps);

    return 0;
}

