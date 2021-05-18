#include <stdio.h>


// 1 


int main() {
    int max,
        z;
    scanf("%d", &z);
    max = z;
    while ( z != 0) {
        if (z>max) max = z ;
        scanf("%d", &z);         
    }
    printf("%d\n", max);
}






