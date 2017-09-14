#include <stdio.h>

int contCaracter(char str[], char c, int tamanho) {

    int i, qnt = 0;
    for(i = 0; i < tamanho; i++) {
        if(str[i] == c) {
            qnt++;
        }
    }
    return qnt;
}

int main() {

    int i;
    char vetor[] = "exemplo", caracter;
    printf("Digite o caracter que deseja procurar: \n");
    scanf("%c", &caracter);
    printf("Aparece %d vezes o caracter %c.\n", contCaracter(vetor, caracter, 7), caracter);

    return 0;
}