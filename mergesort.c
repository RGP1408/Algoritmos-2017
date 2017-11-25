//A função ordena o vetor
//utlizando o método de ordenação
//mergesort com um vetor de 5 elementos aleatórios

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mergesort (int v[], int p, int r);
void intercala (int v[], int p, int q, int r);
void print (int v[], int n);

int main (void) {

	int i, v[5];
        
	// semente de rand que gera números aleatórios
	srand(time(NULL));

	while (i < 5) {

		v[i] = rand() % 100;// fun rand
		i++;
	}

	mergesort(v,0,5);
	print(v,5);
	
	return 0;
}

void mergesort (int v[], int p, int r) {

	int q = (p+r)/2;

	if (p < r-1) {

          mergesort(v, p, q);
          mergesort(v, q, r);
          intercala(v, p, q, r);

	}
}

void intercala (int v[], int p, int q, int r) {

	int i, j, k, *w;

	w = (int *) calloc((r-p), sizeof(int));

	if (w != NULL) {

		i = p; j = q; k = 0;

		while (i < q && j < r) {

			if (v[i] < v[j]) w[k++] = v[i++];
			   else          w[k++] = v[j++];

		}

		while (i < q)
			w[k++] = v[i++];

		while (j < r)
			w[k++] = v[j++];

		for (i = p; i < r; i++) v[i] = w[i-p];

			free(w);
		  w = NULL;

	} else printf("Não é possivel reservar espaço solicitado\n");

} 

void print(int v[], int n) {

	int i = 0;

	while (i < n) {

		printf("%d ", v[i]);
		i++;
	}
	printf("\n");
}
