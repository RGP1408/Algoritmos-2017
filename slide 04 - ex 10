/*Dizemos que uma matriz quadrada A é simétrica se e somente se A[i][j] = A[j][i]
Implemente uma função para verificar se uma matriz de números inteiros é simétrica,
se a matriz for simétrica sua função retorna 1 e 0 caso contrário. */

#include <stdio.h>
#include <stdlib.h>

int **alocamatriz(int N, int M);
void lematriz(int **X, int N, int M);
int simetrica(int **X, int N, int M);

int main (void) {

  int **A, N, M, S;

  printf("Digite a quantidade de linhas e colunas :\n");
  scanf("%d", &N);
  scanf("%d", &M);

  //matriz deve ser quadrática 
  if ( N == M) {

      A = alocamatriz(N,M);

      S = simetrica(A,N,M);

      if (S == 0)
        printf("\nMatriz eh simetrica!!\n");
      else
        printf("\nMatriz nao eh simetrica\n");

  } else printf("\nMatriz deve ser quadratica N=M\n");
 
 free(A);
 A = NULL;
 
  return 0;

}
int **alocamatriz(int N, int M) {

   int **X, i, j;

   X = (int**) calloc(N, sizeof(int*));

   for (i = 0; i < N; i++) {

    X[i] = (int*) calloc(M, sizeof(int));

      for (j = 0; j < M; j++);

   }
    //caso não seja possivel alocar espaço desejado
   if(X != NULL) {

    lematriz(X,N,M);

    return X;

    } else printf("\nNao eh possivel reservar o espaco solicitado\n");

}
void lematriz(int **X, int N, int M) {

   int i, j;

   printf("\nDigite os elementos da matriz\n");

   for (i = 0; i < N; i++) {

    for (j = 0; j < M; j++)
        scanf("%d", &X[i][j]);
   }
}
int simetrica(int **X, int N, int M) {

   int i, j, nao = 0;

   for (i = 0; i < N; i++) {

    for (j = 0; j < M; j++) {
         //verifica cada elemento com o indice inverso
        if (X[i][j] != X[j][i])
            nao++;
    }
   }

    return nao;
}
