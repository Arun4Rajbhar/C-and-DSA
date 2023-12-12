#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int a=90,b=87;
    cout<<"a = "<<a<<" b = "<<b<<"\n";
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"a = "<<a<<" b = "<<b<<"\n";
    return 0;
}
