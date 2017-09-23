/*O traço de uma matriz é a soma dos elementos de sua diagonal principal.
 Implemente uma função que receba uma matriz quadrada
 (número de linhas = número de colunas) e devolva o seu traço.*/

#include <stdio.h>
#include <stdlib.h>

int **alocamatriz(int N, int M);
void lematriz(int **X, int N, int M);
int traco(int **X, int N, int M);

int main (void) {

  int **A, N, M, T;

  printf("Digite a quantidade de linhas e colunas :\n");
  scanf("%d", &N);
  scanf("%d", &M);

  //matriz deve ser quadrática para poder calcular seu traço
  if (N == M) {

  A = alocamatriz(N,M);

  } else printf("\nmatriz deve ser quadratica N=M\n");

  T = traco(A,N,M);

  printf("\nO traco da matriz eh = %d\n", T);
  
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
int traco(int **X, int N, int M) {

   int i, j, somatraco = 0;

   for (i = 0; i < N; i++) {

    for (j = 0; j < M; j++) {

        if (i == j)
            somatraco += X[i][j];
    }
   }

    return somatraco;
}
