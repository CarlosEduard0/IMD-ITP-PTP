#include <stdio.h>

int idadeEmDias(int anos, int meses, int dias) {

    dias += 30 * meses;
    dias += 365 * anos;
    return dias;
}

int main() {

    int anos, meses, dias;
    printf("Digite a quantidade de anos, meses e dias respectivamente: ");
    scanf("%d %d %d", &anos, &meses, &dias);
    printf("Idade em dias: %d\n", idadeEmDias(anos, meses, dias));

    return 0;
}