#include <stdio.h>

int main() {

    int num1, num2, soma;
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    if(soma > 20) {
        printf("%d + %d = %d. Como a soma é maior do que 20 será adicionado mais 8 unidades ao valor da soma, totalizando %d.\n", num1, num2, soma, soma + 8);
        return 0;
    } else {
        printf("%d + %d = %d. Como a soma é menor do que 20 será subtraído 5 unidades, totalizando %d.\n", num1, num2, soma, soma - 5);
    }
    
    return 0;
}