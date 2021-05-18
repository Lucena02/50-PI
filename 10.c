#include <stdio.h>

char *mystrstr (char s1[], char s2[]) {
    int i = 0; 
    int r = 0;
    int pos = 0;
    if (strcmp(s1, s2) == 0) return s1;
    while (s1[r] != '\0') {
        if (s1[r] == s2[i]) {
            pos = r;
            while (s1[r] == s2[i] && s1[r] != '\0' && s2[i] != '\0') {
                r++;
                i++;
            }
            if (s2[i] == '\0') return s1 + pos;
            i = 0;
            r = pos;
        }
        r++;
        i = 0;
    }
    return NULL;
}

// Funciona, mas o codeboard é gay;



    

