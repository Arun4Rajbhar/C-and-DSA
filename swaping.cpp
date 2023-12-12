#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a=5,b=7,c;
    std::cout<<"a = "<<a<<" b = "<<b<<"\n";
    c=a;
    a=b;
    b=c;
    std::cout<<"a = "<<a<<" b = "<<b;

    
    /* code */
    return 0;
}
