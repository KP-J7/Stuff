#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    cout<<1-0.25*pow(sin(2*a),2)+cos(2*a)<<endl;
    cout<<pow(cos(a),2)+pow(cos(a),4)<<endl;
}
