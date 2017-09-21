#include <stdio.h>

typedef struct {

    char nome[30];
    int numeroMatricula;
    char curso[30];
} Aluno;

void imprimirAluno(Aluno *aluno) {

    printf("Nome: %sMatrícula: %d\nCurso: %s", aluno->nome, aluno->numeroMatricula, aluno->curso);
}

int main() {

    int i;
    Aluno alunos[5];

    for(i = 0; i < 2; i++) {

        printf("Digite o nome, numero da matrícula e o curso do %d aluno: ", i + 1);
        fgets(alunos[i].nome, 30, stdin);
        scanf("%d", &alunos[i].numeroMatricula);
        getchar();
        fgets(alunos[i].curso, 30, stdin);
    }

    for(i = 0; i < 2; i++) {

        imprimirAluno(&alunos[i]);
        printf("\n");
    }

    return 0;
}