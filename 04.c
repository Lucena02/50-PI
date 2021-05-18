#include <stdio.h>

int bitsUm (unsigned int x){
    int r;
    for (r = 0; x > 0; x = x/2) {
        if (x%2 == 1) r++;
    }
    return r;
}

