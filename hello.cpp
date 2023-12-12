// Your First C++ Program

#include <iostream>
using namespace std;

int main() {
    int a;
    std::cout<<"enter a number"<<"\n";

    std::cin>>a;
    std::cout << "Hello World!" <<a<<"\n";
    for(int i=1;i<=10;i++){
        cout<<i*2<<"\n";
    }
    return 0;
}