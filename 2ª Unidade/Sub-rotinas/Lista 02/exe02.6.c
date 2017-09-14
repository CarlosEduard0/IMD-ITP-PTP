#include <stdio.h>

float imc(float peso, float altura) {

    return peso / (altura * altura);
    
}

void classificacao(float imc) {

    if(imc <= 19) {
        printf("Magreza\n");
    } else if(imc > 19 && imc <= 25) {
        printf("Peso ideal\n");
    } else if(imc > 25 && imc <= 30) {
        printf("Acima do peso\n");
    } else {
        printf("Obesidade\n");
    }
}

int main() {

    float peso, altura;
    scanf("%f %f", &peso, &altura);
    classificacao(imc(peso, altura));

    return 0;
}