#include <string.h>



int contida (char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && (strchr(b, a[i]))) i++;
    return (a[i] == '\0');
}

