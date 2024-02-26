#include<iostream>
using namespace std;
class base{
    private:// private member can only access inside the same class
        int a=9;
    public:
        int b=90; //public member can be accessed inside and ouside of the class
    protected: //protected member can be accessed inside the same class and also from all the child class of that class
        int c=890;        

};

class child: public base{
    public:
     void display(){
    cout<<"b= "<<b<<" c= "<<c<<"\n";
     }

};
int main(){
    child c;
    c.display();
    cout<<" b= "<<c.b<<"\n"; 
    return 0;
}