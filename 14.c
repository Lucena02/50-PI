#include <stdio.h>

char charMaisfreq (char s[]) {
    char resultado;
    int max = 0;
    int num;
    int i;
    int k;
    int x;
    for (i=0; s[i] != '\0';i++) {
        for (k=0;s[k] != '\0';k++) {
                if (s[0] == s[k]) num += 1;
                if (max < num) {
                    max = num; 
                    resultado = s[0];
                }
            }
            for (x=0; s[x] != '\0'; x++) s[x] = s[x+1];
            num = 0;
            i = 0;
    }
    return resultado;
}

// MAIS FACIL

char charMaisfreq (char s[]) {
    char resultado;
    int max = 0;
    int num;
    int i;
    int k;
    for (i=0; s[i] != '\0';i++) {
        for (k=0;s[k] != '\0';k++) {
                if (s[i] == s[k]) num += 1;
            }
        if (max < num) {
            max = num; 
            resultado = s[i];
        }
        num = 0;
    }
    return resultado;
}


rogramaçao imperativa ; a = 4; r = 3;
expected 'a'
recebe 'r'