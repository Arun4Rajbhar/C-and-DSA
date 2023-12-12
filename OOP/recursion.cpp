#include<iostream>
using namespace std;
int sum(int n){
    if(n>0){
        return n+sum(n-1);
    }
    else{
        return 0;
    }
}
int main(int argc, char const *argv[])
{
    /* code */
    std::cout<<sum(60);
    return 0;
}
