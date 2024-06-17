#include <stdio.h>

void jugar(int *n);

int main()
{
    int x = 10;
    jugar(&x);
    printf("%d\n", x);
    return 0;
}

void jugar(int *n)
{
    int y = *n;
}