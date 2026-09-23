#include<stdio.h>
#include<math.h>
int main(){
    float m,n;
    scanf("f", &m);
    scanf("f", &n);
    printf("%f",((m-1)*sqrt(m)-(n-1)*sqrt(n))/(sqrt(pow(m,3)*n)+n*m+m*m-m));
    printf("%f",(sqrt(m)-sqrt(n))/m);
}
