#include <stdio.h>

void converterParaBinario(int n) {

    if(n == 0) {
        return;
    }
    converterParaBinario(n / 2);
    printf("%d", n % 2);
}

int main() {

    int n = 12;

    converterParaBinario(n);

    printf("\n");

    return 0;
}