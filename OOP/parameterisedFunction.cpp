#include<iostream>
using namespace std;
void greet(string name){//this is parameterised function 
    std::cout<<"Greetings of the day "<<name<<"\n";
}
// When a parameter is passed to the function, it is called an argument. So, from the example above: fname is a parameter, Rahul Mohit, and ragini are arguments.
int main(int argc, char const *argv[])
{
    std::cout<<"inside the main function"<<"\n";
    greet("Rahul");
    greet("Mohit");
    greet("Ragini");
    /* code */
    return 0;
}
