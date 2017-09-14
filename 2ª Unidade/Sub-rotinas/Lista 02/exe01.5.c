#include <stdio.h>

int mais_alto(float altura, float maior) {

    if(altura > maior) {
        return altura;
    }
}

int main(){
    int n, i;
    float altura, maior;
    scanf("%d", &n);
    maior = 0.00;
    for(i=0; i<n; i++){
        scanf("%f", &altura);
        maior = mais_alto(altura, maior);
    }
    printf("%.2f\n", maior);
    return 0;
}