
int detetaVogal (char x) {
    int r = 0;
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') r = 1;
    return r;
}

int contaVogais (char s[]) {
    int r = 0;
    int i = 0;
    while(s[i]!= '\0') {
        r+= detetaVogal(s[i]);
        i++;
    }
    return r;
}



// OUTRA OPÇAO

#include <string.h>

int rubik21 (char s[]) {
    int n = 0; 
    while (*s) {
        if (strchr("aeiouAEIOU", *s)) n+= 1;
        s++;
    }
    return n;
}