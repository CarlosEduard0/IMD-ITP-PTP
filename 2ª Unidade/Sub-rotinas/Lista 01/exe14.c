#include <stdio.h>

int ultima(char str[], char c, int tamanho) {

    int i, posicao = -1;
    for(i = 0; i < tamanho; i++) {
        if(str[i] == c) {
            posicao = i;
        }
    }
    return posicao;
}

int main() {

    int i;
    char vetor[] = "exemplo", caracter;
    printf("Digite o caracter que verificar a última posição: \n");
    scanf("%c", &caracter);
    printf("O caracter aparece na posição %d\n", ultima(vetor, caracter, 7));

    return 0;
}