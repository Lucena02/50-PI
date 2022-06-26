#include <stdio.h>

int difConsecutivos (char s[]) {
    int calc = 0;
    int resp = 0;
    int i;
    while (s[i] != '\0') {
        if (s[i] != s[i+1]) {
            calc++;
            if (calc > resp) resp = calc;
        }
        if (s[i] == s[i+1]) calc = 1;
        i++;
    }
    return resp;
}
