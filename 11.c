#include <stdio.h> 

void strrev (char s[]) {
    int i;
    int r = 0;
    char aux;
    for (i = 0; s[i] != '\0'; i++);
    while (r<i) {
        aux = s[r];
        s[r] = s[i-1];
        s[i-1] = aux;
        r++;
        i--;
    }
}