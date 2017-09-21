#include <stdio.h>

int h(int m, int n) {

    if(n == 1) {
        return m + 1;
    }
    if(m == 1) {
        return n + 1;
    }
    return h(m, n - 1) + h(m - 1, n);
}

int main() {

    int m, n;
    printf("Digite dois números inteiros inteiros: ");
    scanf("%d %d", &m, &n);

    printf("%d termo da série da função h = %d\n", n, h(m, n));

    return 0;
}