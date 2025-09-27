#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, i;
    scanf("%i", &n);
    
    for (i = 1; i <= 10; i++) {
        printf("%i x %i = %i\n", n, i, n * i);
    } 
    return 0;
}
