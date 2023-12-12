#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string vege="radish";//Declaring variable
    string* ptr=&vege;//Setting the pointer where & operator is used for referencing the address of variable into the memory
    std::cout<<vege<<"\n";
    std::cout<<&vege<<"\n";
    std::cout<<ptr<<"\n";
    std::cout<<*ptr<<"\n";//Dereferencing printing the value that is stored at the memory
    *ptr ="Tomato";//Derefferencing and changing the value of variable
    std::cout<<vege;

    
    
    return 0;
}
