#include<iostream>
using namespace std;
void myFun(string name="Ravis"){
    std::cout<<name;

}
int main(int argc, char const *argv[])
{
    /* code */
    myFun("Rohit");
    myFun();//No argument is passed while invoking the function even though in this invoke function will print Ravis as it is a default parameter
    myFun("Haris");
    return 0;
}
