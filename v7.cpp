#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a;
    cin>>a;
    cout<<pow(cos(3*3.14/8-a/4),2)-pow(cos(11*3.14/8+a/4),2)<<endl;
    cout<<(sqrt(2)/2)*sin(a/2)<<endl;
}
