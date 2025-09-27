#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float J;
    float T;
    double V;

    scanf("%f", &J);
    
    scanf("%f", &T);
    
    V = J / T;
    
    printf("%.3lf", V);
    
    return 0;
}
