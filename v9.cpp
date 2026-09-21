#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<pow(cos(a)-cos(b),2)-pow(sin(a)-sin(b),2)<<endl;
    cout<<-4*pow((a-b)/2,2)*cos(a+b)<<endl;
}
