#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j;
    float **matrx = malloc(50 * sizeof(float*));
    for(i = 0; i < 50; i++) {
        matrx[i] = malloc(50 * sizeof(float));
    }

    for(i = 0; i < 50; i++) {
        for(j = 0; j < 50; j++) {
            matrx[i][j] = 0.0;
        }
    }

    return 0;
}