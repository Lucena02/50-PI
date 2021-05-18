#include <stdio.h>

int maxCresc (int v[], int N) {
    int i;
    int r = 0;
    int c = 1;
    for (i = 0; i<N; i++) {
        while (v[i] <= v[i+1] && i<N) {
            c++;
            i++;
        }
        if (c > r) {
            r = c;
            c = 1;
        }
        else c = 1;
    }
    return r;
}

