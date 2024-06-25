#include <stdio.h>

int somar(int a, int b) {
    int resultado= a + b;
    return resultado;
}


int main ()
    {
 int x=8;
 int y=1;
 
 int soma = somar(x, y);
 printf("A soma de %d e %d e %d\n", x, y, soma);
 
 return 0;
}