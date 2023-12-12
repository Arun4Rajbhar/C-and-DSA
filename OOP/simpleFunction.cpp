#include<iostream>
using namespace std;
void hello(){
    std::cout<<"hellow function how are you"<<"\n";
    std::cout<<"outside the main function "<<"\n";
}
int main(int argc, char const *argv[])
{
    std::cout<<"inside the main function"<<"\n";
    hello();

    /* code */
    return 0;
}


