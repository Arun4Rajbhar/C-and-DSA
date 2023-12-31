#include<iostream>
using namespace std;
int main() {
    int a[5]={12,34,22,11,44};
    int *p;
    p=new int[5];//heap allocation
    p[2]=17;//assigning value to the heap array

    delete []p;//deallocation
    p=nullptr;//assigning null pointer
    //By using pointer one can grow or shrink size of array anytime
    return 0;
}