/* Implemente uma função recursiva para calcular
a potência a^n, supondo que tanto a quanto n sejam
números inteiros positivos.*/

#include <stdio.h>

int potencia (int a, int n);

int main (void) {

   int resultado = potencia(9, 3);

   printf("%d\n", resultado);

   return 0;
}

int potencia (int a, int n) {

   if (n == 0)
       return 1;

   if (n == 1)
       return a;

    if (n > 1)
        return a * potencia(a, n-1);
}
