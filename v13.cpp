#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    cout<<(sin(a)+cos(2*b+a))/(cos(a)-sin(2*b-a))<<endl;
    cout<<(1+sin(2*b))/cos(2*b)<<endl;
}
