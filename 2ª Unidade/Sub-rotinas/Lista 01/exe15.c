#include <stdio.h>

int contaBranco(char str[]) {

    int i, qntBranco = 0;
    for(i = 0; i < 13; i++) {
        if(str[i] == ' ') {
            qntBranco++;
        }
    }
    return qntBranco;
}

int main() {

    int i;
    char vetor[] = "ea s d p l o ";
    printf("Quantidade de catacteres em branco %d\n", contaBranco(vetor));

    return 0;
}