#include<stdio.h>
int main()
{
    int ara[] = {1, 2, 3, 4};
    int n = 4;
    int i = 0;
    int a = 0;
    for(; i < n; i++){
        a = ara[i]+a;
    }
    printf("%d\n", a);
    return 0;
}
