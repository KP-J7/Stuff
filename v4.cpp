#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<(sin(2*a)+sin(5*a)-sin(3*a))/(cos(a)-cos(3*a)+cos(5*a))<<endl;
    cout<<tan(3*a)<<endl;
}
