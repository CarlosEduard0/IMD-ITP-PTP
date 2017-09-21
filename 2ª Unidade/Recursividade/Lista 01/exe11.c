#include <stdio.h>

int multiplicarRecursao(int n, int k) {

    if(k == 1) {
        return n;
    }
    return n + multiplicarRecursao(n, k - 1);
}

int main() {

    int n, k;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &n, &k);

    printf("%d * %d = %d\n", n, k, multiplicarRecursao(n, k));

    return 0;
}