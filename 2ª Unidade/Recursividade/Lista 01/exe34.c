#include <stdio.h>

void imprimeSerie(int i, int j, int k) {

    if(i > j) {
        return;
    }
    if(i <= j) {
        printf("%d ", i);
    }
    imprimeSerie(i + k, j, k);
}

int main() {

    int i = 10, j = 100, k = 20;

    imprimeSerie(i, j, k);

    printf("\n");

    return 0;
}