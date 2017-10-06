/* funcao insertionsort com vetor defindo em tempo de execução e números aleatórios de 1 à 100
obs : funçâo mostra a quantidade de trocas realizadas*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *alocavetor (int n);
void insertionsort (int *v,int n);
void troca (int *v, int i, int j);
void mostra (int *v, int n);

int main (void) {
    
    int *A, n;
    
    printf("Digite o tamanho do vetor:\n");
    scanf("%d", &n);

    A = alocavetor(n); 

    insertionsort(A,n);	
    mostra(A,n);

    free(A);

    A = NULL;

    return 0;

}

int *alocavetor (int n) {

  int *x, i = 0;
  
  x = (int*) calloc(n, sizeof(int));

  if (x != NULL) {

    srand(time(NULL));

    while (i < n) {

      x[i] = rand() % 100;
      i++;
    }
  }
  
  return x;
}

void insertionsort (int *v, int n) {
   
  int i,j,trocas = 0;

  for (i = 1; i < n; i++) {

  	j = i;

  	while (j > 0 && v[j] < v[j-1]) {
  		troca (v, j, j-1);
      trocas++;
        j--;
    }
  }	
  printf("\nQuantidade de trocas : %d\n", trocas);
}

void troca (int *v, int i, int j) {

	int aux;

	aux = v[i];
	v[i] = v[j];
	v[j] = aux;

}

void mostra (int v[], int n) {

	int i = 0;

	while (i < n) {
     
     printf("%d ", v[i]);
     
     i++;

	}

	printf("\n");
}
