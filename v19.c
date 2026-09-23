#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("f", &a);
    printf("%f",1/(((1+a+a*a)/(2*a+a*a))+2-((1-a+a*a)/(2*a-a*a)))*(5-2*a*a));
    printf("%f",4-a*a/2);
}
