#include <stdio.h>

int main()
{
    int n ,*pn;
    float nf , *pf;
    char ch;
    char *pc;
    n =5;
    nf = 10;
    ch = 'a';
    printf("Valor do int: %d\n Valor do float : %f\n Valor de char: %c\n" , n,nf,ch);
    pn = &n;
    pf = &nf;
    pc = &ch;
    *pn = 10;
    *pf = 20;
    *pc = 'b';
    printf("Valor do int: %d\n Valor do float : %f\n Valor de char: %c" , *pn,*pf,*pc);
    return 0;
}
