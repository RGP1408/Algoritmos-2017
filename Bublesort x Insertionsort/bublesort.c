/* funcao bublesort com vetor defindo em tempo de execução e números aleatórios de 1 à 100
obs : funçâo mostra a quantidade de trocas realizadas*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *alocavetor (int n);
void bublesort (int *v, int n);
void print (int *v, int n);
void troca (int *v, int i, int j); 

int main (void) {
	
	int *A, n;

	printf("Digite o tamanho do vetor:\n");
	scanf("%d", &n);

	A = alocavetor(n);

	bublesort(A, n);
	print(A, n);

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


void bublesort (int *v, int n) {

	int i = 0 ,trocas = 0;

	while (n > 1) {

		for (i = 0; i < n-1; i++) {

		     if (v[i] > v[i+1]) {
			     troca(v, i, i+1);
			     trocas++;
		     }

	    }
    n--;
	}

	printf("Quantidade de trocas = %d\n", trocas);
}	

void troca (int *v, int i, int j) {

    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;

}

void print (int *v, int n) {

	int i = 0;

	while (i < n) {

		printf("%d ", v[i]);
		i++;

	}

	printf("\n");
}