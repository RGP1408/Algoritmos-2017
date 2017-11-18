/*Escreva uma função que receba dois vetores (A[] e B[]) já ordenados em ordem crescente, 
a sua função aloca um vetor C[] exatamente com soma dos tamanhos de A e B, e intercala 
os elementos de A[] e B[] em C[], de forma que o vetor C[] fique ordenado em ordem crescente.
Escreva função o mais eficiente possível. Não é para juntar os vetores e ordenar o 
vetor C[] usando o método Bolha nem o Inserção.*/

#include <stdio.h>
#include <stdlib.h>

int *intercala (int A[], int n1, int B[], int n2, int *n3);
void mostrar (int *v, int n);

int main (void) {

	int A[5] = {1, 3, 5, 7, 9}, B[5] = {2, 4, 6, 8, 10}, *v, n3;

	v = intercala(A, 5, B, 5, &n3);

	mostrar(v, n3);

	free(v);
	
	v = NULL;

    return 0;
}

int *intercala (int A[], int n1, int B[], int n2, int *n3) {

    int *C, i, j, k;

    *n3 =  n1+n2;

    C = (int*) calloc(*n3, sizeof(int));

    if (C != NULL) {
     
        i = j = k = 0;

        while (i < n1 && j < n2) {

         	if (A[i] < B[j]) 
         		C[k++] = A[i++];
                else 
                C[k++] = B[j++];
        }

        while (i < n1)
       	        C[k++] = A[i++];

        while (j < n2)
      	        C[k++] = B[j++];

        return C; 
    
    } else printf("Impossivel reservar espaço solicitado\n");    

}

void mostrar (int *v, int n) {

	int i = 0;

	while (i < n) {

		printf("%d ", v[i]);
		i++;

	}
	printf("\n");
}
