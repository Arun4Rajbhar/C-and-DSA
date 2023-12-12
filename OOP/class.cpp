#include<iostream>
using namespace std;
class myClass
{
public:
int num;
string name;
    /* data */

};
int main(int argc, char const *argv[])
{
    /* code */
    myClass obj;
    obj.num=678;
    obj.name="Arun Rajbhar";
    std::cout<<obj.name<<" "<<obj.num;

    return 0;
}



