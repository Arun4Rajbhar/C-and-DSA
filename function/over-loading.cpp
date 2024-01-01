#include<iostream>
using namespace std;
int area(int a,int b){
    return a*b;
}
float area(float r){
    const float p=3.14;
    return 2*p*r;
}
int area(int side){
    return side*side;
}

int main(){
    float a=9.0;
    cout<<area(a)<<endl;
    cout<<area(23,67)<<endl;
    cout<<area(56);

    return 0;
}