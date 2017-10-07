/* funcao Insertion Sort com vetor defindo em tempo de execução e com números aleatórios de 1 à 100000
obs : funçâo mostra a quantidade de trocas realizadas*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *Alocavetor (int n);
void InsertionSort (int *v,int n);
void Troca (int *v, int i, int j);
void Print (int *v, int n);

int main (void) {

    int *A, n;

    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &n);

    A = Alocavetor(n);
    InsertionSort(A,n);
    Print(A,n);

    free(A);
    A = NULL;

    return 0;

}

int *Alocavetor (int n) {

  int *x, i = 0;

  x = (int*) calloc(n, sizeof(int));

  if (x != NULL) {
    //semente de rand
    srand(time(NULL));

    while (i < n) {

      x[i] = rand() % 100000;//função que gera números aleatórios
      i++;

    }
  } else printf("Impossivel alocar o espaço requisitado!\n");

  return x;
}

void InsertionSort (int *v, int n) {

  int i,j;
  double trocas = 0;

  for (i = 1; i < n; i++) {

  	j = i;

  	while (j > 0 && v[j] < v[j-1]) {
  		Troca (v, j, j-1);
        trocas++;
        j--;
    }
  }
  printf("Quantidade de trocas : %.lf\n", trocas);
}

void Troca (int *v, int i, int j) {

	int aux;

	aux = v[i];
	v[i] = v[j];
	v[j] = aux;

}

void Print (int v[], int n) {

	int i = 0;

	while (i < n) {

     printf("%d ", v[i]);

     i++;

	}

	printf("\n");
}
