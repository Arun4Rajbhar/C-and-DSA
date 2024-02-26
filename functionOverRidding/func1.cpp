#include<iostream>
using namespace std;
class parent{
    public:
        void display(){
            cout<<"Hello i parent";
        }

};
class child:public parent{
    public:
        void display(){
            cout<<"Hello i am child";
        }

};
int main(){
    return 0;
}