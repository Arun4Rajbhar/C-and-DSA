#include<iostream>
using namespace std;
int area(int l,int b){
    std::cout<<l*b<<"\n";
}
double area(double r,double p){
    std::cout<<p*r*r<<"\n";

}
int area(int side){
    std::cout<<side*side<<"\n";

}
int main(int argc, char const *argv[])
{
    area(56,78);
    area(45);
    area(5.6,3.14);
    /* code */
    return 0;
}

