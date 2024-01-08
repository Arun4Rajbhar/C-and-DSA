#include<iostream>
using namespace std;
class complex{
    private :
        int real,img;
        void setRealAndImg(int r,int i);  
    public :
        complex(int r,int i);   
        int getReal(){return real;}
        int getImg(){return img;}
        void displayComp();
        complex operator+(complex c);
        complex operator-(complex a);
        // complex operator*(complex m);
        ~complex(){}
        

};

complex::complex(int r=0,int i=0 ){
    setRealAndImg(r,i);

}
void complex::setRealAndImg(int r,int i){
    this->real=r;
    this->img=i;

}
void complex::displayComp(){
    cout<<getReal()<<"+"<<getImg()<<"i"<<"\n";

}
complex complex::operator+(complex c){
    complex temp(0,0);
    temp.real=c.real+real;
    temp.img=c.img+img;
    return temp;
}
complex complex::operator-(complex a){
    complex temp1;
    temp1.real=a.real-real;
    temp1.img=a.img-img;
    return temp1;
}
// complex complex::operator*(complex m){
//     complex temp1;
//     temp1.real=c.real-real;
//     temp1.img=c.img-img;
// }




int main(){
    complex c(6,8),c1(8,4),c2;
    c2=c1-c;
    c2.displayComp();

    return 0;
}