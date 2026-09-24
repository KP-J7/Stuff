#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    if (a<=b<=c<=d)
        cout<<max(max(a,b),max(d,c))<<max(max(a,b),max(d,c))<<max(max(a,b),max(d,c))<<max(max(a,b),max(d,c));
     if (a>b>c>d)
        cout<<a<<b<<c<<d;
     else
        cout<<a*a<<b*b<<c*c<<d*d;

}
