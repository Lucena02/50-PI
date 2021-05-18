#include <stdio.h>
#include <string.h>

int strlength(char s1[]) {
    int i;
    for (i = 0; s1[i] != '\0';i++);
    return i;
}


int maiorSufixo (char s1[], char s2[]) {
    int i = strlength(s1) - 1;
    int i2 = strlength(s2) - 1;
    int resp = 0;
    while(s1[i] == s2[i2] && i >= 0 && i2 >= 0) {
        resp++;
        i--;
        i2--;
    }
    return resp;
}