#include <stdio.h>

void estacao(int dia, int mes) {

    if(mes >= 9 && mes <= 12) {
        if(mes == 9 && dia < 23) {
            printf("%d/%d é inverno\n", dia, mes);
            return;
        }
        if(mes == 12 && dia >= 21) {
            printf("%d/%d é verão\n", dia, mes);
            return;
        }
        printf("%d/%d é primavera\n", dia, mes);
    } else if(mes >= 1 && mes <= 3) {
        if(mes == 3 && dia >= 21) {
            printf("%d/%d é outono\n", dia, mes);
            return;
        }
        printf("%d/%d é verão\n", dia, mes);
    } else if(mes >= 4 && mes <= 6) {
        if(mes == 6 && dia >= 21) {
            printf("%d/%d é inverno\n", dia, mes);
            return;
        }
        printf("%d/%d é outono\n", dia, mes);
    }
}

int main() {

    int dia, mes;
    printf("Digite o dia e o mês respectivamente: ");
    scanf("%d %d", &dia, &mes);
    estacao(dia, mes);

    return 0;
}