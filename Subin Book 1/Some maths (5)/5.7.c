#include <stdio.h>
int main()
{
    int a, b, c, x, gcd, lcm;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b < c){
        x = a;
    }
    if(a<c<b){
        x = a;
    }
    if(b<a<c){
        x = b;
    }
    if(b<c<a){
        x = b;
    }
    if(c<a<b){
        x = c;
    }
    else{
        x = c;
    }
    for(; x >= 1; x--){
        if(a%x == 0 && b%x == 0 && c%x == 0){
            gcd = x;
            break;
        }
    }
    printf("GCD is %d\n", gcd);
    lcm = (a*b)/gcd;
    printf("LCM is %d\n", lcm);

    return 0;
}
