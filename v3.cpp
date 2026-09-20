#include <iostream>
#include<cmath>
#include<numbers>
using namespace std;

int main() {
    int a,b;
    cin>>a;
    cin>>b;
    cout<<(sin(2*a)+sin(5*a)-sin(3*a))/(cos(a)+1-2*pow(sin(2*a),2))<<endl;
    cout<<2*sin(a)<<endl;
}
