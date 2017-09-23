/* Dadas duas matrizes Amxn e Bnxp. Obter a matriz Cmxp onde C = AxB */

#include <stdio.h>
#include <stdlib.h>

int **AlocaMatriz(int N, int M);
void LeMatriz(int **X, int N, int M);
void ImprimeMatriz(int **X, int N, int M);
int  MultiplicaMatrizes(int **A, int **B, int NA, int MA, int NB, int MB);

int main (void) {

    int **A, **B, NA, MA, NB, MB;

    printf("\nDigite a qntd de linhas e colunas de A:\n");

    scanf("%d", &NA);
    scanf("%d", &MA);

    A = AlocaMatriz(NA,MA);

    printf("\nDigite a qntd de linhas e colunas de B:\n");

    scanf("%d", &NB);
    scanf("%d", &MB);

    B = AlocaMatriz(NB,MB);

    MultiplicaMatrizes(A,B,NA,MA,NB,MB);

    free(A);
    A = NULL;

    free(B);
    B = NULL;

    return 0;

}

int **AlocaMatriz(int N, int M) {

    int **X, i, j;

    //Alocando a Matriz
    X = (int**) calloc(N, sizeof(int*));

    for (i = 0; i < N; i++) {

        X[i] = (int*) calloc(M, sizeof(int));

        for (j = 0; j < M; j++);

    }

    // caso espaço solicitado não esteja disponível
    if (X != NULL) {

        printf("\nAgora digite os elementos da matriz : \n");

        LeMatriz(X,N,M);

    } else printf("\nNao e posivel reservar espaco solicitado \n");

    return X;

}
void LeMatriz(int **X, int N, int M) {

   int i,j;

   for (i = 0; i < N; i++) {

    for (j = 0; j < M; j++) {

        scanf("%d", &X[i][j]);
    }
   }

}
void ImprimeMatriz(int **X, int N, int M) {

   int i, j;

   printf("\nMatriz impressa : \n");

   for (i = 0; i < N; i++) {

      printf("\n");

      for (j = 0; j < M; j++)

         printf("%d ", X[i][j]);

   }
   printf("\n");
}
int  MultiplicaMatrizes(int **A, int **B, int NA, int MA, int NB, int MB) {

   int **C, i, j, k;

   if (MA == NB) {

   //Alocando C separadamente sem alocamatriz()
   C = (int**) calloc(NA, sizeof(int*));

   for(i = 0; i < NA; i++) {

    C[i] = (int*) calloc(MB, sizeof(int));

    for(j = 0; j < MB; j++);
   }

   //Multiplicacao das matrizes
   for (i = 0; i < NA; i++) {

    for (j = 0; j < MB; j++) {

        for (k = 0; k < NA; k++)
            C[i][j] += A[i][k]*B[k][i];
    }
   }

    ImprimeMatriz(C,NA,MB);

    free(C);
    C = NULL;

   } else printf("\nCondicao de multiplicacao invalida!!qtd de colunas de A devem iguais as linhas de B\n");
}

