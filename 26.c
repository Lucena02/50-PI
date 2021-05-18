#include <stdio.h>

/*
Defina uma fun¸c˜ao void insere (int v[], int N, int x) que insere um elemento (x) num
vector ordenado. Assuma que as N primeiras posi¸c˜oes do vector est˜ao ordenadas e que por
isso, ap´os a inser¸c˜ao o vector ter´a as primeiras N+1 posi¸c˜oes ordenadas.
*/

// [1,2,4] N = 3
// [1,2,3,4]

void insere (int v[], int N, int x) {
    int j, i;
    int aux[N+1];
    for(i = 0, j=0; ((x > v[j]) && (i<N)); i++, j++) {printf("%d", v[j]); aux[i] = v[j];}
    aux[i] = x;
    i++;
    for(; i<N+1;i++,j++) aux[i] = v[j];
    for(i=0; i<N+1; i++) v[i] = aux[i];
}
