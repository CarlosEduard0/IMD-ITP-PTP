#include <stdio.h>

int fatorial(int n) {

    int i, fatorial = 1;
    for(i = 2; i <= n; i++) {
        fatorial *= i;
    }
    return fatorial;
}

int main() {

    int n;
    scanf("%d", &n);
    printf("%d\n", fatorial(n));

    return 0;
}