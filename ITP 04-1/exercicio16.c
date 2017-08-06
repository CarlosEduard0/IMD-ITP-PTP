#include <stdio.h>

int main() {

    int a, b, c, maior, inter, menor;
    scanf("%d %d %d.\n", &a, &b, &c);
    if(a >= b && b >= c) {
        maior = a;
        inter = b;
        menor = c;
    } else if(a >= c && c >= b) {
        maior = a;
        inter = c;
        menor = b;
    } else if(b >= a && a >= c) {
        maior = b;
        inter = a;
        menor = c;
    } else if(b >= c && c >= a) {
        maior = b;
        inter = c;
        menor = a;
    } else if(c >= a && a >= b) {
        maior = c;
        inter = a;
        menor = b;
    } else {
        maior = c;
        inter = b;
        menor = a;
    }

    return 0;
}