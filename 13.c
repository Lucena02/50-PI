#include <stdio.h>
//igualdade, cona
//igua cona

void truncW (char t[], int n){
    int i, 
        aux=n, 
        k;
    for (i=0 ; t[i] != '\0' ; i++) {
        if (t[i] == ' ') aux=n; // se encontrar um espaço dá reset ao auxiliar
        else if (aux == 0) { // se o auxiliar for zero tras os caracteres uma posicao para tras
            for (k=i ; t[k] != '\0' ; k++) {
                t[k] = t[k+1];
            }
            i--; // decrementa ao i
        }
        else aux--; // caso nao seja zero o aux apenas decrementa
    }
}