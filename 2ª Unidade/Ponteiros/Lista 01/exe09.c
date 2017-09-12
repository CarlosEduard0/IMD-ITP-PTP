#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j;
    float aux;
    float *ponteiro = malloc(5 * sizeof(float*));

    for(i = 0; i < 5; i++) {
        scanf("%f", &*(ponteiro + i));
    }

    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if(*(ponteiro + i) < *(ponteiro + j)) {
                aux = *(ponteiro + i);
                *(ponteiro + i) = *(ponteiro + j);
                *(ponteiro + j) = aux;
            }
        }
    }

    for(i = 0; i < 5; i++) {
        printf("%.0f ", *(ponteiro + i));
    }

    return 0;
}