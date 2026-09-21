#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a;
    cin>>a;
    cout<<(1-2*pow(sin(a),2))/(1+sin(2*a))<<endl;
    cout<<(1-tan(a))/(1+tan(a))<<endl;
}
