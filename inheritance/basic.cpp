#include<iostream>
using namespace std;
class base{
    public:
        int x=9;
        void display(){
            cout<<x;
        }

};
class child:public base
{
    public:
         int y=7;
         void displaychild(){
            cout<<y<<" "<<x;
         }

};
int main(){
    base b;
    b.display();
    child c1;
    c1.displaychild();
    c1.display();
    return 0;
}