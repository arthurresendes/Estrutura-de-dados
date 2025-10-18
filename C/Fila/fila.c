#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int dado;
    struct No *prox;
} NO;

typedef struct FILA
{
    NO *inicio;
    NO *fim;
} FILA;

void enfilerar(int dado, FILA *f)
{
    NO *ptr = (NO *)malloc(sizeof(NO));
    if (ptr == NULL)
    {
        printf("Erro na alocação!!\n");
        return;
    }
    else
    {
        ptr->dado = dado;
        ptr->prox = NULL;
        if (f->inicio == NULL)
        {
            f->inicio = ptr;
        }
        else
        {
            f->fim->prox = ptr;
        }

        f->fim = ptr;
    }
}

void desenfilera(FILA *f)
{
    NO *ptr = f->inicio;
    if (ptr != NULL)
    {
        printf("Elemento desenfileirado: %d\n", ptr->dado);
        f->inicio = ptr->prox;
        free(ptr);
        if (f->inicio == NULL)
        {
            f->fim = NULL;
        }
    }
    else
    {
        printf("Sem dados na fila!!\n");
        return;
    }
}


void imprime_fila(FILA *f)
{
    NO *ptr = f->inicio;
    if (ptr == NULL)
    {
        printf("Sem dados na fila!!");
        return;
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d\n", ptr->dado);
            ptr = ptr->prox;
        }
    }
}

int main()
{
    FILA f;
    int opcao;
    int valor;
    do
    {
        printf("1- Inserir\n");
        printf("2- Desinfileirar\n");
        printf("3- Imprimir fila\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite um valor inteiro: ");
            scanf("%d", &valor);
            enfilerar(valor, &f);
            break;
        case 2:
            desenfilera(&f);
            break;
        case 3:
            imprime_fila(&f);
            break;
        
        case 0:
            printf("Saindo... \n");
            return 0;
        default:
            printf("Opcao invalida!!");
        }
    } while (opcao != 0);

    return 0;
}