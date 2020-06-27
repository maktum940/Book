#include <stdio.h>

int main()
{
    int x, p;
    x = 10;
    printf("Address of x: %p\n", &x);
    x = 20;
    printf("Address of x: %p\n", &x);
    x = 30;
    printf("Address of x: %p\n", &x);
    p = &x;
    printf("Address of x: %d\n", p);
    return 0;
}
