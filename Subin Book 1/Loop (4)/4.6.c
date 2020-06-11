#include <stdio.h>

int main()
{
    int n = 5, i = 0;

    for (; i<= 10; i = i+1) {

        printf("%d X %d = %d\n", n, i, n*i );
    }
    return 0;
}
