#include <stdio.h>
#include <string.h>

int vogais (char a) {
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') return 1;
    else return 0;
}

void strnoV (char s[]) {
    int t;
    int j;
    int i = 0;
    for (t = 0; s[t] != '\0'; t++);
    char aux[t];
    for (j = 0; j < t;j++) {
        if (vogais (s[j]) == 0) {
            aux[i++] = s[j];
        }
    }
    aux[i] = '\0';
    strcpy(s,aux);
}