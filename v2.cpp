#include <iostream>
#include<cmath>
#include<numbers>
using namespace std;

int main() {
    int a,b;
    cin>>a;
    cin>>b;
    cout<<cos(a)+sin(a)+cos(3*a)+sin(3*a)<<endl;
    cout<<2*sqrt(2)*cos(a)*sin(3.14/4+2*a)<<endl;
}
