#include <stdio.h>

int catalan(int n) {

    if(n == 0) {
        return 1;
    }
    return (2 * (2 * n - 1) * catalan(n - 1)) / (n + 1);
}

int main() {

    int n;
    printf("Digite um número inteiro n: ");
    scanf("%d", &n);

    printf("%d termo da série de catalan = %d\n", n, catalan(n));

    return 0;
}