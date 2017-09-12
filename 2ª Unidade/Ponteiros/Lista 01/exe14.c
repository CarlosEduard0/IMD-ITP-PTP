#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j, cont, *contador = &cont;
    *contador = 1;
    int **matriz = malloc(100 * sizeof(int *));
    for(i = 0; i < 100; i++) {
        matriz[i] = malloc(100 * sizeof(int));
        for(j = 0; j < 100; j++) {
            matriz[i][j] = *contador;
            (*contador)++;
        }
    }

    for(i = 0; i < 100; i++) {
        for(j = 0; j < 100; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }    

    return 0;
}