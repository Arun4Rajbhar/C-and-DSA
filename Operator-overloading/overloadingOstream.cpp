#include<iostream>
using namespace std;
class complex{
    private:
        int real,img;
    public:
        complex(int r,int i);
        friend ostream & operator<<(ostream &o,complex c);

};

complex::complex(int r=0,int i=0){
    this->real=r;
    this->img=i;

}
ostream & operator<<(ostream &o,complex c){
    o<<c.real<<"+"<<c.img<<"i";
    return o;
}
int main(){
    complex c(4,8);
    cout<<c;
    return 0;
}
