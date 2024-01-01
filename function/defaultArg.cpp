#include<iostream>
using namespace std;
int add(int a,int b,int c=0){
    //this function will work with both the invoke add(a,b),add(a,b,c) because default argument is already passed
    return a+b+c;
}
int main(){
    cout<<add(7,8,3)<<"\n";
    cout<<add(5,78);
    return 0;
}