#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("f", &a);
    printf("%f",((a+2)/sqrt(2*a)+(a)/(sqrt(2*a)+2)+2/(a-sqrt(2*a)))*((sqrt(a)-sqrt(2))/(a+2)));
    printf("%f",1/(sqrt(a)+sqrt(2)));
}
