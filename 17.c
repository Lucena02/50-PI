#include<stdio.h>

int maiorPrefixo (char s1 [], char s2 []) {
    int resp = 0;
    int i;
    for (i=0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] == s2[i]) resp++;
        else break;
    }
    return resp;
}
