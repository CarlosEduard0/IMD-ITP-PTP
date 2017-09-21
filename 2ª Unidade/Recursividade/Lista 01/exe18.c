#include <stdio.h>

int fatorial(int n) {

    if(n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int superFatorial(int n) {

    if(n == 1) {
        return 1;
    }
    return fatorial(n) * superFatorial(n - 1);
}

int main() {

    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    printf("Super fatorial de %d = %d\n", n, superFatorial(n));

    return 0;
}