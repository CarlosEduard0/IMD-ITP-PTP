#include <stdio.h>

int contaImpar(int n1, int n2) {
    int numerosImpares = 0;
    int maior = (n1 >= n2) ? n1 : n2;
    int menor = (n1 <= n2) ? n1 : n2;
    for(menor; menor <= maior; menor++) {
        if(menor % 2 != 0) {
            numerosImpares++;
        }
    }
    return numerosImpares;
}

int main() {

    int n1, n2;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &n1, &n2);
    printf("Quantidade de números ímpares entre %d e %d: %d\n", n1, n2, contaImpar(n1, n2));

    return 0;
}