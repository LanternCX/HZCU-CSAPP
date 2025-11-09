#include <stdio.h>

int sum_unsigned(int a[], unsigned len) {
    int i, sum = 0;
    for (i = 0; i <= len-1; i++)
        sum += a[i];
    return sum;
}

int sum_signed(int a[], int len) {
    int i, sum = 0;
    for (i = 0; i <= len-1; i++)
        sum += a[i];
    return sum;
}

int main() {
    int arr[1] = {100};

    // printf("unsigned len (0):\n");
    // Access Violation
    // printf("%d\n", sum_unsigned(arr, 0));

    printf("signed len (0):\n");
    printf("%d\n", sum_signed(arr, 0));

    return 0;
}

