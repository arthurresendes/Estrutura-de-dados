#include <stdio.h>

int ordena(int *a, int *b, int *c) {
    int temp;

    if (*a > *b) { temp = *a; *a = *b; *b = temp; }
    if (*a > *c) { temp = *a; *a = *c; *c = temp; }
    if (*b > *c) { temp = *b; *b = *c; *c = temp; }

    if (*a == *b && *b == *c) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x, y, z, resultado;

    printf("Digite tres valores inteiros:\n");
    scanf("%d %d %d", &x, &y, &z);

    resultado = ordena(&x, &y, &z);

    printf("Valores ordenados: %d %d %d\n", x, y, z);

    if (resultado == 1) {
        printf("Os tres valores sao iguais.\n");
    } else {
        printf("Existem valores diferentes.\n");
    }

    return 0;
}
