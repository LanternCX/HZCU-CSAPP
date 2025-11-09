#include <stdio.h>

void xor_swap(int *x, int *y) {
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int len) {
    int left, right = len - 1;
    for(left = 0; left < right; left++, right--)
        xor_swap(&a[left], &a[right]);
}

int main() {
    int a1[] = {1, 2, 3, 4, 5};
    int len1 = sizeof(a1)/sizeof(a1[0]);
    int i;

    printf("Before reverse: ");
    for(i = 0; i < len1; i++) printf("%d ", a1[i]);
    printf("\n");

    reverse_array(a1, len1);

    printf("After reverse: ");
    for(i = 0; i < len1; i++) printf("%d ", a1[i]);
    printf("\n");

    int a2[] = {10, 20, 30, 40};
    int len2 = sizeof(a2)/sizeof(a2[0]);

    printf("Before reverse: ");
    for(i = 0; i < len2; i++) printf("%d ", a2[i]);
    printf("\n");

    reverse_array(a2, len2);

    printf("After reverse: ");
    for(i = 0; i < len2; i++) printf("%d ", a2[i]);
    printf("\n");

    return 0;
}

