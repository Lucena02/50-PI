#include <stdio.h>


int main() {
    int max,
        max2,
        z;
    scanf("%d", &z);    
    max = z;
    scanf("%d", &z);
    if (z > max) {
        max2 = max ;
        max = z;
    }
    else max2 = z;
    while ( z != 0) {
        if (z>max) { 
            max2 = max;
            max = z ;
        }        
        else if (z > max2 && z < max) max2 = z ; 
        scanf("%d", &z);         
    }
    printf("%d\n", max2);
}