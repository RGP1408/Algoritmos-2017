/* A função recebe um número x e um vetor em ordem crescente v[0..n-1]com n elementos.
A função devolve um índice m tal que v[m] == x ou devolve -1 se tal m não existe*/

#include <stdio.h>

int buscabinaria(int v[], int N, int x);

int main (void) {

  int A[10] = {1,5,15,22,30,40,50,88,90,150},indice;

  indice = buscabinaria(A,10,2);

  printf("indice : %d\n", indice);

  return 0;

}
int buscabinaria(int v[], int N, int x) {

   int inicio , m, f;

   inicio = 0;
   f = N - 1;

   while (inicio <= f) {
    m = (inicio + f) / 2;

    if(v[m] == x)
        return m;

    if(x < v[m])
        f = m - 1;
    else
        inicio = m + 1;

   }

   return -1;
}
