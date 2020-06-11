#include <stdio.h>
int main()
{
    int a, i;

    int ara[10];
    for(i = 1;i <= 9; i++){
        scanf("%d", &a);
        ara[a] = a;
    }

    for(i = 1; i <= 9; i++){
        printf("%d ", ara[i]);
    }

}
