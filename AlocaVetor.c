#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void alocaVetor (int n);
void leVetor(int *v, int n);

int main (void) {

   alocaVetor(5);

   return 0;

}
void alocaVetor (int n) {

   int *v, i = 0;

   v = (int *) malloc(n * sizeof(int));
  
   //verifica se é possível alocar ou não o espaço requisitado.  
   if (v != NULL) {

     leVetor(v,5);

     free(v);
     v = NULL;

   } else printf("Impossivel alocar o espaco requisitado\n");

}
void leVetor(int *v, int n) {

    int i = 0;

    /* semente para funçao rand, toda vez que o programa rodar, gerará números novos. */
   srand(time(NULL));


    while (i < n) {

         //função rand() gera números aleatórios toda vez que inicializada.
         v[i] = rand () % 1000;

         printf("%d ", v[i]);

          i++;

     }

}
