/*Escreva uma função yyy que recebe três parâmetros inteiros (hora, minutos, soma_minutos) os dois
primeiros representando uma determinada hora no formato horas:minutos e o parâmetro soma_minuto é 
o valor que será adicionado a hora:minutos. A sua função faz a soma da horas:minutos com o parâmetro 
soma_minutos e devolve a hora atualizada.*/

#include <stdio.h>

void yyy(int *hora, int *minutos, int soma_minutos);

int main(void) {

  int hora,minutos;

  printf("Digite a hora minuto\n\n");

  scanf("%d %d", &hora,&minutos);

  yyy(&hora,&minutos,120);

  return 0;

}

void yyy(int *hora, int *minutos, int soma_minutos) {

    *hora += (*minutos + soma_minutos) / 60;
    *minutos = ((*hora * 60) + (*minutos + soma_minutos))%60;

    printf("\nHora atualizada = %dh : %dmin\n", *hora,*minutos);

}
