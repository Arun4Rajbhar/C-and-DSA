#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            std::cout<<j*i<<"\t";

        }
        std::cout<<"\n";
    }
    return 0;
}
