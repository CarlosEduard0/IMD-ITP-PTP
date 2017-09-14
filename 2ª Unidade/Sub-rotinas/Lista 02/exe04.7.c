#include <stdio.h>


int main() {

    int i, n, golsAmerica, golsABC, vitAmerica = 0, vitAbc = 0, empates = 0;
    printf("Digite a quantidade de partidas: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d %d", &golsAmerica, &golsABC);
        if(golsAmerica > golsABC) {
            vitAmerica++;
        } else if(golsAmerica < golsABC) {
            vitAbc++;
        } else {
            empates++;
        }
    }

    printf("América venceu: %d\n", vitAmerica);
    printf("ABC venceu: %d\n", vitAbc);
    printf("Empates: %d\n", empates);
    if(vitAmerica > vitAbc) {
        printf("América é o rei dos clássicos\n");
    } else if(vitAmerica < vitAbc) {
        printf("ABC é o rei dos clássicos\n");
    } else {
        printf("Ninguém é o rei dos clássicos\n");
    }
    
    return 0;
}