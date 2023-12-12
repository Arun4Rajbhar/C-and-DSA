#include<iostream>
using namespace std;
class myclass{
    public:
    myclass(int runs,string name){
        std::cout<<runs<<"  "<<name;
    }
};
int main(int argc, char const *argv[])
{
    myclass obj(456222,"sachin");
    return 0;
}
