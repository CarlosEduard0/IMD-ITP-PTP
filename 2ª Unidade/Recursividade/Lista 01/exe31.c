#include <stdio.h>

int somaSerie(int i, int j, int k) {

    if(i >= j) {
        return i;
    }
    return i + somaSerie(i + k, j, k);
}

int main() {

    int i, j, k;
    printf("Digite três números inteiros: ");
    scanf("%d %d %d", &i, &j, &k);

    printf("Somatorio de %d até %d com variação de %d = %d\n", i, j, k, somaSerie(i, j, k));

    return 0;
}