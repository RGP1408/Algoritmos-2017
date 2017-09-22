/*Dado a matriz Anxn, determine sua transposta At,
onde A[i][j] = At[j][i] para qualquer i e j.
Suponha que 1 <= n <= 20 */

#include <stdio.h>
#include <stdlib.h>

int alocamatriz();
void LeMatriz(int **X, int N, int M);
int Transposta(int **X, int N, int M);
void ImprimeMatriz(int **X, int N, int M);

int main (void) {

   alocamatriz();

   return 0;
}
int alocamatriz() {

  int **X,N,M,i,j;

  printf("Digite a quantidade de linhas e colunas da matriz quadratica:\n");

  scanf("%d", &N);
  scanf("%d", &M);

  //para a matriz ter uma transporta a quantidade de linhas deve ser igual a quantidade de colunas
  if (N == M && N >= 1 && N <= 20) {

  // alocando a matriz
  X = (int**) calloc(N, sizeof(int*));

  for (i = 0; i < N; i++) {

    X[i] = (int*) calloc(M, sizeof(int));

    for (j = 0; j < M; j++);

   }

   if(X != NULL) {

    LeMatriz(X, N, M);
    Transposta(X,N,M);

   }

   //desalocando o vetor
   free(X);
   X = NULL;

  } else printf("\nProblema exige que seja uma matriz quadratica e menor que 20 linhas!!!\n");

}

void LeMatriz(int **X, int N, int M) {

   int i,j;

   printf("\nDigite os elementos da matriz\n");

   for (i = 0; i < N; i ++) {

    for(j = 0; j < M; j++)

        scanf("%d", &X[i][j]);

   }
}
int Transposta(int **X, int N, int M) {

   int i, j, aux;

   for (i = 0 ; i < N; i++) {

    for (j = 1; j < M; j++) {

             if (j != i) {

             aux = X[i][j];
             X[i][j] = X[j][i];
             X[j][i] = aux;

             }
        }
    }

    ImprimeMatriz(X,N,M);
}
void ImprimeMatriz(int **X, int N, int M) {

   int i, j;

   printf("\nMatriz transposta :\n");

   for (i = 0; i < N; i++) {

       printf("\n");

       for (j = 0; j < M; j++)
        printf("%d ", X[i][j]);

   }
   printf("\n");
}
