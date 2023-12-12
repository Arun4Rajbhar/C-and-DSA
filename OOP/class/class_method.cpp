#include<iostream>
using namespace std;
class myclass{
    public://Declaring method inside ,class and also writing definition
    void table(){
        for(int i=1;i<=10;i++){
            std::cout<<2*i;
        }
    }
    void cap();

};
//method definition
void myclass::cap(){
    std::cout<<"Function's definition is written outside the class ";
}
int main(int argc, char const *argv[])
{
    myclass obj;
    obj.table();
    obj.cap();
    return 0;
}
