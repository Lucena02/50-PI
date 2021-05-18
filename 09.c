#include <stdio.h>
#include <string.h>

int mystrcmp (char s1[], char s2[]) {
    int t1;
    for (t1=0; s1[t1] != '\0' && s2[t1] != '\0' && s1[t1] == s2 [t1];t1++);
        return (s1[t1] - s2[t1]);
}

