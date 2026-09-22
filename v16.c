#include <stdio.h>
#include <math.h>

int main() {
    float x;
    scanf("%f",&x);
    printf("%f", x*x+2*x-3+(x+1)*sqrt(x*x-9));
    printf("%f", sqrt((x+3)/(x-3)));
}
