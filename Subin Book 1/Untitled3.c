#include<stdio.h>
int main()
{
    int i;
    int as[5];
    for(i = 0; i < 5; i++){
        scanf("%d", &as[i]);
    }
    for(i = 0; i < 5; i++){
        printf("%d\n", as[i]);
    }
    printf("%d\n", as[i]);

    return 0;
}
