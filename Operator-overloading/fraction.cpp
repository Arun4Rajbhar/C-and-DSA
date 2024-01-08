#include<iostream>
using namespace std;
class fraction{
    private:
        int p,q;
    public:
        fraction(int p,int q);
        friend ostream & operator<<(ostream &o,fraction f);
        friend fraction operator+(fraction f1,fraction f2);
        friend fraction operator-(fraction f1,fraction f2);
        friend fraction operator*(fraction f1,fraction f2);
        friend fraction operator/(fraction f1,fraction f2);

};
fraction::fraction(int p=0,int q=0){
    this->p=p;
    this->q=q;
}
ostream & operator<<(ostream &o,fraction f){
    o<<f.p<<"/"<<f.q;
    return o;

}
fraction operator+(fraction f1,fraction f2){
    fraction temp;
    temp.p=(f1.p*f2.q)+(f2.p*f1.q);
    temp.q=f1.q*f2.q;
    return temp;
}
fraction operator-(fraction f1,fraction f2){
    fraction temp;
    temp.p=(f1.p*f2.q)-(f2.p*f1.q);
    temp.q=f1.q*f2.q;
    return temp;
}
fraction operator*(fraction f1,fraction f2){
    fraction temp;
    temp.p=f1.p*f2.p;
    temp.q=f1.q*f2.q;
    return temp;
}
fraction operator/(fraction f1,fraction f2){
    fraction temp;
    temp.p=f1.p*f2.q;
    temp.q=f1.q*f2.p;
    return temp;
}
int main(){
    fraction f1(7,9),f2(4,3),f3;
    f3=f1+f2;
    cout<<f1<<"+"<<f2<<"="<<f3<<endl;
    f3=f1-f2;
    cout<<f1<<"-"<<f2<<"="<<f3<<endl;
    f3=f1*f2;
    cout<<f1<<"*"<<f2<<"="<<f3<<endl;
    f3=f1/f2;
    cout<<f1<<"/"<<f2<<"="<<f3<<endl;
    
    return 0;
}