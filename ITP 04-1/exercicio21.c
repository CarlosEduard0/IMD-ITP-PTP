#include <stdio.h>

int main() {

    double peso, altura;
    printf("Digite o peso e altura respectivamente: ");
    scanf("%lf %lf", &peso, &altura);
    double imc = peso / (altura * altura);
    if(imc < 20) {
        printf("Abaixo do peso.\n");
    } else if(imc >= 20 && imc < 25) {
        printf("Peso normal.\n");
    } else if(imc >= 25 && imc < 30) {
        printf("Sobre peso.\n");
    } else if(imc >= 30 && imc < 40) {
        printf("Obeso.\n");
    } else {
        printf("Obeso mórbido.\n");
    }
    return 0;
}