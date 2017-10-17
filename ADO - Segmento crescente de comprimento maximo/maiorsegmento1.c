/* Dados um vetor de n números inteiros, faça uma função para determinar o comprimento 
de um segmento crescente de comprimento máximo. 
 
    Exemplos: Na sequência
 
    {5, 10, 3, 2, 4, 7, 9, 8, 5} o comprimento do segmento crescente máximo é 4 {2, 4, 7, 9}. 
 
    Na sequência
    {10, 8, 7, 5, 2} o comprimento de um segmento crescente máximo é 1.

*/
#include <stdio.h>

int maiorsegmento (int v[], int n);

int main (void) {

	int v[9] = {5, 10, 3, 2, 4, 7, 9, 8, 5};

	maiorsegmento(v,9);

	
    return 0;

}

int maiorsegmento (int v[], int n) {

    
    int i, sequenciacorrente = 1, sequenciamaxima = 1;

    for (i = 1; i < n; i++) {

    	if (v[i] > v[i-1]) {
    		sequenciacorrente++;

    	    if (sequenciamaxima < sequenciacorrente) 
    	    	sequenciamaxima = sequenciacorrente;
             
             } else 
    	        sequenciacorrente = 1; //caso não seja a contagem é a reiniciada   
        }

    printf("Sequência máxima : %d\n", sequenciamaxima);
}

