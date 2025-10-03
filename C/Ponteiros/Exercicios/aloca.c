#include <stdio.h>

int main()

{
    int *p;
    int a = 10;
    printf("%d\n", a);
    p = &a;
    *p = 15;
    printf("%d", *p);

    return 0;
}