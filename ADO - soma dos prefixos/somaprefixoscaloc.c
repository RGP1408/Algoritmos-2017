/* Escreva um algoritmo que calcula a soma dos prefixos de um vetor. 
A soma de prefixos de um vetor V em S pode ser definida por:
	S[0] = V[0]
	S[i] = V[i] + V[i – 1]+V[i – 2]+  . . . +V[0]*/

#include <stdio.h>
#include <stdlib.h>

int *alocamatriz(int n);
void somaprefixos (int v[], int n);
void levetor (int *v, int n);
void mostrar (int v[], int n);

int main (void) {

	int *v, n;
    
    printf("Digite o tamanho do vetor:\n");
	scanf("%d", &n);

	v = alocamatriz(n);

     // só prossegue se for possível reservar espaço solicitado.
	if (v != NULL) {

		levetor(v,n);

		printf("A soma dos prefixos é:\n");

	    somaprefixos(v,n);
	
	} else printf("Impossivel reservar espaço solicitado\n");

	free(v);
	v = NULL;

	return 0;

}

int *alocamatriz (int n) {

	int *x;

	x = (int *) calloc(n, sizeof(int));

	return x;
}

void levetor (int *v, int n) {

	int i = 0;

	printf("Agora digite os elementos do vetor:\n");

	while (i < n) {

		scanf("%d", &v[i]);
		i++;

	}
}

void somaprefixos (int v[], int n) {

    int *s, i, j = 0;

    // aloca um novo vetor para receber a soma dos prefixos.
    s = (int *) calloc(n, sizeof(int));
    
    //primeiro elemento receber v[0] de acordo com o enunciado.
    s[0] = v[0];

	for (i = 1; i < n; i++) {

        s[i] = v[i] + s[j];
        j++;
	}

	mostrar(s,n);

    free(s);
    s = NULL;
}

void mostrar (int v[], int n) {

	int i = 0;

	while (i < n) {

		printf("%d ", v[i]);
		i++;

	}
	printf("\n");
}

