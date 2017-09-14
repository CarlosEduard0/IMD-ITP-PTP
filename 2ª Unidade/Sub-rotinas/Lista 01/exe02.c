#include <stdio.h>

char conceito(int media) {

    if(media >=0 && media <= 49) {
        return 'D';
    } else if(media > 49 && media <= 69) {
        return 'C';
    } else if(media > 69 && media <= 89) {
        return 'B';
    } else if(media > 89 && media <= 100){
        return 'A';
    }
    return ' ';
}

int main() {

    int media;
    printf("Digite a média de um aluno: ");
    scanf("%d", &media);
    printf("Conceito do aluno: %c\n", conceito(media));

    return 0;
}