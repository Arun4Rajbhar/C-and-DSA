#include<iostream>
using namespace std;
class rectangle
{
   public: 
    int len,bridth;
    int area(){
        return len*bridth;
    }
    int primeter(){
        return 2*(len+bridth);
    }
};



int main(){
    rectangle r1,r2;
    r1.len=6;
    r1.bridth=90;
    cout<<r1.area()<<"\n";
    cout<<r1.primeter()<<"\n";


}