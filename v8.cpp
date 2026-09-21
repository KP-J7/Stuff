#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    cout<<pow(cos(x),4)+pow(sin(y),2)+0.25*pow(sin(2*x),2)-1<<endl;
    cout<<sin(x+y)*sin(y-x)<<endl;
}
