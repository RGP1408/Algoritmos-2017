// Escreva uma função que selecione o primeiro elemento de um vetor, 
// e rearranje o vetor de forma que todos os elementos menor ou igual 
// ao primeiro elemento fiquem a sua esquerda e os maiores a sua direita.
// Se o vetor informado for 
//	{5, 6, 2, 7, 9, 1, 8, 3, 7} após ser rearranjado teríamos 
//	{1, 3, 2, 5, 9, 7, 8, 6, 7}. 
//  Note que o vetor ainda não está ordenado */

#include <stdio.h>

void rearranja (int v[], int n);
void trocar (int v[], int i, int j);
void mostrar (int v[], int n);

int main (void) {

	int v[9] = {5, 6, 2, 7, 9, 1, 8, 3, 7};
	
  rearranja(v,9);
	mostrar(v,9);
	
	return 0;
}

void rearranja (int v[], int n) {

	int i = 1, j = n-1;

	while (i < j) {

		while (v[i] < v[0]) i++;
		while (v[j] > v[0]) j--;

		if (i < j)
		   trocar(v, i, j);
	}

	trocar(v, 0, j);
}

void trocar (int v[], int i, int j) {

	int aux = v[i];
	v[i] = v[j];
	v[j] = aux;
}

void mostrar (int v[], int n) {

	int i = 0;

	while (i < n) {

		printf("%d ", v[i]);
		i++;

	}

	printf("\n");

}
