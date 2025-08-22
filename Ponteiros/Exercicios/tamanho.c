#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
    char palavra[200];
    int cont = 0;
    char *p;
    printf("Digite uma palavra: ");
    fgets(palavra, sizeof(palavra), stdin); 

    p = palavra;

    while (*p != '\0' && *p != '\n') { 
        cont++;
        p++;
    }

    printf("A palavra tem %d letras\n", cont);
    return 0;

}