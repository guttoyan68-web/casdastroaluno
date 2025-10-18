
#include <stdio.h>
#include <string.h>

// Definição da estrutura Aluno
struct Aluno {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float media;
};

int main() {
    struct Aluno aluno;

    // Entrada de dados
    printf("===== Cadastro de Aluno =====\n");

    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, 50, stdin);
    aluno.nome[strcspn(aluno.nome, "\n")] = '\0'; // remove o \n do final do nome

    printf("Digite a matrícula do aluno: ");
    scanf("%d", &aluno.matricula);

    printf("Digite a primeira nota: ");
    scanf("%f", &aluno.nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &aluno.nota2);

    // Cálculo da média
    aluno.media = (aluno.nota1 + aluno.nota2) / 2;

    // Saída de dados
    printf("\n===== Dados do Aluno =====\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Nota 1: %.2f\n", aluno.nota1);
    printf("Nota 2: %.2f\n", aluno.nota2);
    printf("Média: %.2f\n", aluno.media);

    // Situação final
    if (aluno.media >= 6.0) {
        printf("Situação: Aprovado\n");
    } else {
        printf("Situação: Reprovado\n");
    }

    return 0;
}
