#include<iostream>
using namespace std;
class rectangle{
    private:
        int len,bri;
    public:
        rectangle(int l,int bri);
        int getlen(){return len;}
        int getbri(){return bri;}
        void setlen(int l);
        void setbri(int b);
        int area(){return len*bri;}
        int primeter(){return 2*(len+bri);}    

};
rectangle::rectangle(int l=0,int b=0){
    this->setlen(l);
    this->setbri(b);
}
void rectangle::setlen(int l){
    if(l>=0){
        this->len=l;
        
    }
    else{
        cout<<"Invalid Input";


    }

}
void rectangle::setbri(int b){
    if(b>=0){
        this->bri=b;
        
    }
    else{
        cout<<"Invalid Input";


    }

}
class cuboid:public rectangle{
    private:
        int height;
    public:
        cuboid(int l,int b,int h);
        void setheight(int h);
        int getheight(){return height;}
        int volume();  
        int surfaceArea();


};
cuboid::cuboid(int l=0,int b=0,int h=0){
    setlen(l);
    setbri(b);
    setheight(h);
}
void cuboid::setheight(int h=0){
    if(h>=0){
        this->height=h;
    }
    else{
        cout<<"Invalid Input";
    }
}
int cuboid::volume(){
    return getlen()*getbri()*height;
}
int cuboid::surfaceArea(){
    return 2*((getlen()*getbri())+(getbri()*height)+(getlen()*height));
}
int main(){
    cuboid c(4,8,9);
    cout<<c.surfaceArea()<<"\n";
    cout<<c.volume();
    return 0;
}