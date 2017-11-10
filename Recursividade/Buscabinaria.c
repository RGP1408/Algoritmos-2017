#include <stdio.h>

int Busca (int v[], int x, int i, int f);

int main (void) {

    int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, indice;

    indice = Busca(v, 9, 0, 10);

    printf("indice = %d\n", indice);

    return 0;
}

int Busca (int v[], int x, int i, int f) {

    int m;

    if (i > f)
        return -1;

    m = (i + f)/2;

    if (v[m] == x)
        return m;

    if (x < v[m])
        return Busca(v, x, i, m-1);
    else
        return Busca(v, x, m+1, f);

}
