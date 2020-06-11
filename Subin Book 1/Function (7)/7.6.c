#include <stdio.h>
int average(int ara[], int n, int average);
int main()
{
    int ara[] = {-100, 0, 53, 22, 83, 23,
    89, -132, 201, 3, 85};
    int n = 11;
    int sum_ara = average (ara, n, average);
    printf("%d\n", sum_ara);
    return 0;
}
int average(int ara[], int n, int average)
{
    int a = 0;
    int i = 0;
    for(; i < n; i++){
        a = ara[i]+ a;
    }
    average = a/n;
    return average;
}


