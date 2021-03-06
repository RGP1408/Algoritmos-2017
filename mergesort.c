//A função ordena o vetor
//utlizando o método de ordenação
//mergesort com um vetor de 5 elementos aleatórios

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mergesort (int v[], int p, int n);
void intercala (int v[], int p, int q, int n);
void print (int v[], int n);

int main (void) {

	int i, v[5];
        
	// semente de rand que gera números aleatórios
	srand(time(NULL));

	while (i < 5) {

		v[i] = rand() % 100;// função rand
		i++;
	}

	mergesort(v, 0, 5);
	print(v, 5);
	
	return 0;
}

void mergesort (int v[], int p, int n) {

	int q = (p+n)/2;

	if (p < n-1) {

          mergesort(v, p, q);
          mergesort(v, q, n);
          intercala(v, p, q, n);

	}
}

void intercala (int v[], int p, int q, int n) {

	int i, j, k, *w;

	w = (int *) calloc((n-p), sizeof(int));

	if (w != NULL) {

		i = p; j = q; k = 0;

		while (i < q && j < n) {

			if (v[i] <= v[j]) w[k++] = v[i++];
			   else           w[k++] = v[j++];

		}

		while (i < q)
			w[k++] = v[i++];

		while (j < n)
			w[k++] = v[j++];

		for (i = p; i < n; i++) v[i] = w[i-p];

		  free(w);
		  w = NULL;

	} else printf("Não é possivel reservar espaço solicitado\n");

} 

void print (int v[], int n) {

	int i = 0;

	while (i < n) {

		printf("%d ", v[i]);
		i++;
	}
	printf("\n");
}
