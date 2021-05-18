#include <stdio.h>


int main() {
    int y,
        z = 0;
    float x = 0;
    scanf("%d", &y) ;     
    while (y != 0) {       
       x = x + y;
       z++;  
       scanf("%d", &y);     
    }
    x = x/z;
    printf("%f",x);
}