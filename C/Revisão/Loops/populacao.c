#include <stdio.h>
#include <string.h>

int main() {
    float salario, somaSalario = 0, maiorSalario = 0;
    int filhos, somaFilhos = 0;
    int contSalario100 = 0, totalPessoas = 0;

    while (1) {
        printf("Digite o salario (negativo para sair): ");
        scanf("%f", &salario);

        if (salario < 0) {
            break; 
        }

        printf("Digite o numero de filhos: ");
        scanf("%d", &filhos);

        somaSalario += salario;
        somaFilhos += filhos;
        totalPessoas++;

        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        if (salario <= 100) {
            contSalario100++;
        }
    }

    if (totalPessoas > 0) {
        printf("\nMedia do salario: R$ %.2f\n", somaSalario / totalPessoas);
        printf("Media do numero de filhos: %.2f\n", (float)somaFilhos / totalPessoas);
        printf("Maior salario: R$ %.2f\n", maiorSalario);
        printf("Percentual com salario ate R$100: %.2f%%\n", (contSalario100 * 100.0) / totalPessoas);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
