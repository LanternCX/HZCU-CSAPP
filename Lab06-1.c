#include <limits.h>
#include <stdio.h>

int uadd_ok(unsigned x, unsigned y) {
    return x + y >= x;
}

int usub_ok(unsigned x, unsigned y) {
    return x >= y;
}

int tadd_ok(int x, int y) {
    int sum = x + y;
    if (x > 0 && y > 0 && sum < 0) {
        return 0;
    }
    if (x < 0 && y < 0 && sum > 0) {
        return 0;
    }
    return 1;
}

int tsub_ok(int x, int y) {
    int diff = x - y;
    if (x >= 0 && y < 0 && diff < 0) {
        return 0;
    }
    if (x < 0 && y > 0 && diff > 0) {
        return 0;
    }
    return 1;
}

int main() {
    printf("%d\n", uadd_ok(4000000000u, 2000000000u));
    printf("%d\n", usub_ok(3u, 5u));
    printf("%d\n", tadd_ok(INT_MAX, 1));
    printf("%d\n", tsub_ok(INT_MIN, 1));
    return 0;
}

