/* funcao Bubble Sort com vetor defindo em tempo de execução e com números aleatórios de 1 à 100000
obs : funçâo mostra a quantidade de trocas realizadas*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *Alocavetor (int n);
void BubbleSort (int *v, int n);
void Print (int *v, int n);
void Troca (int *v, int i, int j);

int main (void) {

	int *A, n;

	printf("Digite o tamanho do vetor:\n");
	scanf("%d", &n);

	A = Alocavetor(n);

	BubbleSort(A, n);
	Print(A, n);

	free(A);
	A = NULL;

	return 0;
}

int *Alocavetor (int n) {

	int *x, i = 0;

	x = (int*) calloc(n, sizeof(int));

	if (x != NULL) {

        // semente de rand para gerar números aleatórios
		srand(time(NULL));

		while (i < n) {

			x[i] = rand() % 100000;// geração de números aleatórios

			i++;
		}
	} else printf("Impossível alocar espaço requisitado!\n");

    return x;
}


void BubbleSort (int *v, int n) {

	int i = 0;
	double trocas = 0;

	while (n > 1) {

		for (i = 0; i < n-1; i++) {

		     if (v[i] > v[i+1]) {
			     Troca(v, i, i+1);
			     trocas++;
		     }

	    }
    n--;
	}

	printf("Quantidade de trocas = %.lf\n", trocas);
}

void Troca (int *v, int i, int j) {

    int aux = v[i];
    v[i] = v[j];
    v[j] = aux;

}

void Print (int *v, int n) {

	int i = 0;

	while (i < n) {

		printf("%d ", v[i]);
		i++;

	}

	printf("\n");
}
