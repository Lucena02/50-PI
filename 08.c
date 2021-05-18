#include <stdio.h>

char *mystrcpy (char *dest, char source[]) {
    int i;
    for(i=0;source[i] != '\0'; i++) {
        dest[i] = source[i];
    }
    dest[i] = '\0';
}
