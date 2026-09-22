#include <stdio.h>
#include <math.h>

int main() {
    float x;
    scanf("%f",&x);
    printf("%f", (sqrt((3*x+2)*(3*x+2)-24*x))/(3*sqrt(x)-2/(sqrt(x))));
    printf("%f", -sqrt(x));
}
