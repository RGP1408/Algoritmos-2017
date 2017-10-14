/*Pesquise informações sobre como funciona a ordenação por seleção, 
tente fazer um método para esse algoritmo. */

#include <stdio.h>

void selectionsort (int v[], int n);
void troca (int *x, int *y);
void mostrar (int v[], int n);

int main (void) {
	
	int v[5] = {7,12,6,10,1};

	selectionsort(v,5);
	mostrar(v,5);

	return 0;
}

void selectionsort (int v[], int n) {

	int idx_menor,i,j;

	for (i = 0; i < n; i++) {

		idx_menor = i;

		for (j = i + 1; j < n; j++) {

			if (v[j] < v[idx_menor])
				idx_menor = j;
		}

		troca(&v[i], &v[idx_menor]);
	}
}

void troca (int *x, int *y) {

	int aux = *x;
	*x = *y;
	*y = aux;

}

void mostrar (int v[], int n) {

	int i = 0;

	while (i < n) {

		printf("%d ", v[i]);
		i++;

	}

	printf("\n");

}
