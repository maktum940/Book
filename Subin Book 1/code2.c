#include<stdio.h>
#include<math.h>
int main()
{
    int t, n,diff=0, a=0,b=0,i,j;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int ara[n];
        for(i = 1; i <= n; i++){
            ara[i] = pow(2,i);
            printf("%d ", ara[i]);
        }
    }
}
