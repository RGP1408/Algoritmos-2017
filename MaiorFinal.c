/*Escreva uma função que receba um vetor por parâmetro e
coloca o maior elemento do vetor no final do vetor de forma que o
vetor continue estável. Dica: utilize trocas sucessivas.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h> //para semente de rand

void AlocaVetor(int n);
int MaiorNoFinal(int *v, int n);
void LeVetor(int *v, int n);


int main (void) {


    AlocaVetor(5);//defina aqui o tamanho do vetor.

    return 0;

}
void AlocaVetor (int n) {

    int *v,i = 0;

    v = (int *) calloc(n, sizeof(int));
    
    //verifica se é possível pode alocar ou não.
    if (v != NULL) {
        
        //semente de rand.
        srand(time(NULL));

        while (i < n) {
            
            //função rand() gera números aleatórios.
            v[i] = rand() % 1000;

            i++;
        }

        LeVetor(v,n);

        printf("\n");

        MaiorNoFinal(v,n);

    } else printf("Impossivel alocar o espca requisitado\n");

    free(v);// libera o espaço reservado para o vetor.
    v = NULL;
}

int MaiorNoFinal(int *v, int n) {

     int i = 0, inicio = 0, aux;

     while (i < n) {

        if (v[inicio] > v[inicio+1]) {

            aux = v[inicio];
            v[inicio] = v[inicio+1];
            v[inicio+1] = aux;

        }
        i++;
        inicio++;
     }

     printf("Maior elemento no final: \n");

     LeVetor(v,n);
}

void LeVetor(int *v, int n) {

    int i = 0;

    while (i < n) {

        printf("%d ", v[i]);
        i++;
    }
    printf("\n");
}


