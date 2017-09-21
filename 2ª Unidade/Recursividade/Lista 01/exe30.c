#include <stdio.h>

int ackerman(int m, int n) {

    if(m == 0) {
        return n + 1;
    }
    if(m > 0 && n == 0) {
        return ackerman(m - 1, 1);
    }
    if(m > 0 && n > 0) {
        return ackerman(m - 1, ackerman(m, n - 1));
    }
}

int main() {

    int m, n;
    printf("Digite dois números inteiros inteiros: ");
    scanf("%d %d", &m, &n);

    printf("%d termo da série da função h = %d\n", n, ackerman(m, n));

    return 0;
}