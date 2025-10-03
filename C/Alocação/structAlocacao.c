#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[30];
    float nota1;
    float nota2;
    float nota3;
} Aluno;

int main()
{
    Aluno *a;
    int opcao;
    int capacidade = 2;
    int qtd = 0;
    float soma = 0;
    a = (Aluno *)malloc(capacidade * sizeof(Aluno));

    do
    {
        if (qtd == capacidade)
        {
            capacidade *= 2;
            a = (Aluno *)realloc(a, capacidade * sizeof(Aluno));
        }
        printf("Digite o nome do aluno: ");
        fgets(a[qtd].nome, 30, stdin);
        a[qtd].nome[strcspn(a[qtd].nome, "\n")] = 0;

        printf("Digite a nota 1: ");
        scanf("%f", &a[qtd].nota1);
        printf("Digite a nota 2: ");
        scanf("%f", &a[qtd].nota2);
        printf("Digite a nota 3: ");
        scanf("%f", &a[qtd].nota3);
        qtd++;
        

        printf("Digite 0 para sair ou outra tecla para continuar: ");
        scanf("%d", &opcao);
        getchar();

    } while (opcao != 0);

    for (int i = 0; i < qtd; i++)
    {
        soma = (a + i)->nota1 + (a + i)->nota2 + (a + i)->nota3;
        printf("Nome: %s\n", (a + i)->nome);
        printf("Nota 1: %f\n", (a + i)->nota1);
        printf("Nota 2: %f\n", (a + i)->nota2);
        printf("Nota 3: %f\n", (a + i)->nota3); // a[i].nota3
        printf("Media das notas: %.2f\n", soma / 3.0);
    }

    free(a);
    return 0;
}