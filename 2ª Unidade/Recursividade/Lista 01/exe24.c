#include <stdio.h>

int pell(int n) {

    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    return 2 * pell(n - 1) + pell(n - 2);
}

int main() {

    int n;
    printf("Digite um número inteiro n: ");
    scanf("%d", &n);

    printf("%d termo da série de pell = %d\n", n, pell(n));

    return 0;
}