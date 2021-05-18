#include <stdio.h>

int trailingZ (unsigned int n) {
    int r = 0;
    if (n==0) return 32;
    for(; n > 1; n = n/2){
        if (n%2 == 0) r++;
    }
    return r;
}
