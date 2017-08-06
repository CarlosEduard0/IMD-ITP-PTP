#include <stdio.h>
#include <float.h>

int main() {

    double maior = DBL_MIN, menor = DBL_MAX, valor = 0;
    printf("Informe os 4 valores: ");
    for(int i = 0; i < 4; i++) {
        scanf(" %lf", &valor);
        if(valor > maior) maior = valor;
        if(valor < menor) menor = valor;
    }

    printf("Maior: %.0lf.\n", maior);
    printf("Menor: %.0lf.\n", menor);
    
    return 0;
}