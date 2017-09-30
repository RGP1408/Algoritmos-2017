/* Em termos gerais, o algoritmo percorre um vetor de elementos da esquerda
para a direita e à medida que avança vai deixando os elementos mais à esquerda ordenados.
 O algoritmo de inserção funciona da mesma maneira com que muitas pessoas ordenam
 cartas em um jogo de baralho.*/

#include <stdio.h>
#include <stdlib.h>

int *alocavetor(int N);
void levetor (int *v, int N);
void InsectionSort (int v[], int N);
void troca (int v[], int i, int j);
void mostrar (int v[], int N);

int main (void) {

   int *A,N;

   printf("Digite o tamanho do vetor:\n");
   scanf("%d", &N);

   A = alocavetor(N);
   levetor(A,N);
   InsectionSort(A,N);
   mostrar(A,N);

   return 0;
}

int *alocavetor (int N) {

    int i,*v;

    for (i = 0; i < N; i++)
    v = (int*) calloc(N, sizeof(int));

    return v;
}

void levetor(int *v, int N) {

    int i = 0;

    printf("\nAgora digite os elementos do vetor:\n");

    while (i < N) {

        scanf("%d", &v[i]);
        i++;
    }
}

void InsectionSort (int v[], int N) {

   int i,j;

   for (i = 1; i < N; i++) {

        j = i;

        while (j > 0 && v[j] < v[j-1]) {
              troca(v,j,j-1);
              j--;
        }
   }
}

void troca (int v[], int i, int j) {

   int aux = v[i];
       v[i] = v[j];
       v[j] = aux;

}

void mostrar (int v[], int N) {

   int i = 0;

   printf("\nvetor ordenado:\n");

   while(i < N) {
    printf("%d ", v[i]);
    i++;

   }
}
