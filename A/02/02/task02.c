#include <stdio.h>

int main(){

    float a, b, c;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    if(a > b && a > c) {
        printf("%.1f\n", a);
    } else if(b > a && b > c) {
        printf("%.1f\n", b);
    } else {
        printf("%.1f\n", c);
    }

    return 0;
}
