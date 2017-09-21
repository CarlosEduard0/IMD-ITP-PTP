#include <stdio.h>

int padovan(int n) {

    if(n == 0 || n == 1 || n == 2) {
        return 1;
    }
    return padovan(n - 2) + padovan(n - 3);
}

int main() {

    int n;
    printf("Digite um número inteiro n: ");
    scanf("%d", &n);

    printf("%d termo da série de padovan = %d\n", n, padovan(n));

    return 0;
}