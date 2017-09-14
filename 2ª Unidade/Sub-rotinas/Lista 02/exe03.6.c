#include <stdio.h>

int mover(int direcao, int *x, int *y) {
    switch(direcao) {
        case 0:
            (*y)++;
            break;
        case 1:
            (*x)++;
            break;
        case 2:
            (*y)--;
            break;
        case 3:
            (*x)--;
            break;
    }
}

int virar(int direcao, int sentido) {

    if(direcao + sentido > 3) {
        return 0;
    } else if(direcao + sentido < 0) {
        return 3;
    }
    return direcao + sentido;
}

int main() {

    int x, y, i, direcao = 0;
    char comando;
    printf("Digite o par ordenado inicial: ");
    scanf("%d %d\n", &x, &y);

    for(i = 0; i < 10; i++) {
        scanf("%c", &comando);
        switch(comando) {
            case 'M':
                mover(direcao, &x, &y);
                break;
            case 'D':
                direcao = virar(direcao, 1);
                break;
            case 'E':
                direcao = virar(direcao, -1);
                break;
        }
    }

    printf("%d %d\n", x, y);

    return 0;
}