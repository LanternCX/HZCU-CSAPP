#include<stdio.h>
extern int add(int a, int b);
extern int add1;
extern int add2;

int main()
{
        printf("add is %d\n", add(add1, add2));
        printf("add is %d\n", add(40, 30));
        return 0;
}

