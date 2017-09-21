#include <stdio.h>
#include <stdlib.h>

void cadastrarAlunos() {

    int i;
    float notas[3];
    char matricula[3] = {'0', '0', '0'}, nome[30] = "Nome aluno";
    FILE *arquivo = fopen("alunos.bin", "wb");

    for(i = 0; i < 50; i++) {

        matricula[1] = (i + 1) / 10 + '0';
        matricula[2] = (i + 1) % 10 + '0';
        notas[0] = rand() % 10;
        notas[1] = rand() % 10;
        notas[2] = rand() % 10;

        fwrite(matricula, sizeof(char), 3, arquivo);
        fwrite(nome, sizeof(char), 30, arquivo);
        fwrite(notas, sizeof(float), 3, arquivo);
    }

    fclose(arquivo);
}

int main() {

    //cadastrarAlunos();

    int i;
    float notas[3], media;
    char matricula[3], nome[30], *conceito = "Preocupante";
    FILE *arquivo = fopen("alunos.bin", "rb");

    printf("Matrícula\tNome\tMédia\tConceito\n");
    for(i = 0; i < 50; i++) {

        fread(matricula, sizeof(char), 3, arquivo);
        fread(nome, sizeof(char), 30, arquivo);
        fread(notas, sizeof(float), 3, arquivo);
        media = (notas[0] + notas[1] + notas[2]) / 3;
        if(media >= 8.5) {
            conceito = "Excelente";
        } else if(media >= 7) {
            conceito = "Bom";
        } else {
            conceito = "Preocupante";
        }

        printf("%s\t%s\t%.2f\t%s\n", matricula, nome, media, conceito);
    }

    fclose(arquivo);

    return 0;
}