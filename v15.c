#include <stdio.h>
#include <math.h>

int main() {
    float b;
    scanf("%f",&b);
    printf("%f",sqrt(2*b+2*sqrt(b*b-4))/(sqrt(b*b-4)+b+2));
    printf("%f",1/(sqrt(b+2)));
}
