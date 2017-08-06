#include <stdio.h>

int main() {

    double salario, valorPrestacao;
    printf("Digite o valor do salário: ");
    scanf("%lf", &salario);
    printf("Digite o valor da prestação: ");
    scanf("%lf", &valorPrestacao);
    if(valorPrestacao > salario * 0.3) {
        printf("O empréstimo não pode ser concebido pois ultrapassa os 30%% permitido.\n");
        return 0;
    }
    printf("O empréstimo com a prestação de %.2lf foi concebido com sucesso.\n", valorPrestacao);
    
    return 0;
}