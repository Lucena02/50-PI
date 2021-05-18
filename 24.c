#include <string.h>


int remRep (char x[]) {
    int j;
    int i = 0;
    for(j = 0; x[i] != '\0';j++) {
        x[j] = x[i];
        while (x[i] != '\0' && x[j] == x[i]) i++;
    }
    x[j] = '\0';
    return j;
}