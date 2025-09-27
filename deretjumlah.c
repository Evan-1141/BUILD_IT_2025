#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A, B;
    
    scanf("%i %i", &A, &B);
    
    int jumlah = (A+B) * (B-A+1) / 2;
    
    printf("%i\n", jumlah);
    return 0;
}
