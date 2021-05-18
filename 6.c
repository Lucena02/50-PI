#include <stdio.h>

int qDig (unsigned int n) {
    int c = 0;
    if (n == 0) return 1;
    for (; n > 0; n = n/10) c++;
    return c;
}
