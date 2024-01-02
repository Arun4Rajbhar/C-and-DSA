#include<iostream>
using namespace std;
class rectangle
{

public:
    int len,bri;
    int area(/* args */){
        return len*bri;
    }
    int primeter(){
        return 2*(len+bri);
    }
};



int main(){
    rectangle r1;
    rectangle *p;//initializing a pointer of type rectangle
    rectangle *q=new rectangle();//object in the heap memory using pointer
    q->bri=78;
    q->len=45;
    p=&r1;// assigning the address of object r1 to ponter p
    p->bri=10;//passing the value using pointer -> operator 
    p->len=36;
    cout<<p->area()<<"\n";
    cout<<p->primeter()<<"\n";
    cout<<q->area()<<"\n";
    cout<<q->primeter()<<"\n";

    return 0;
}