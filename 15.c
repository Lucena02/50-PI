#include <stdio.h>

#include <stdio.h>

int iguaisConsecutivos (char s[]) {
    int calc;
    int resp = 0;
    int i;
    if (strlen(s) == 1) return 1;
    for(i = 0, calc = 0; s[i] != '\0'; i++){
            if (s[i] == s[i+1]) {
            calc++;
            if (calc > resp) {
                resp = calc;
                }
            }
            else calc = 0;
    }  
    if (resp > 0) resp = resp + 1;
    else resp = 0;
    
    return resp;
} 

// ????