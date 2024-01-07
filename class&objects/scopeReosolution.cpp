#include<iostream>
using namespace std;
class rectangle{
    private :
        int len,bri;
        void LenError();
        void BriError();

    public :
        rectangle(int l,int b);//parameterised constructor
        rectangle(rectangle(&rec));//copy constructor
        void setLen(int l);//setting the len and bri, private variable using member of calss Mutator
        void setBri(int b);//Mutator
        int getlen();//Accessor
        int getbri();//Accessor
        int area();//facilitators
        int primeter();//facilitators
        bool isSquare();//enquery
        ~rectangle();//destructor
    


};
int main(){
    rectangle r(-78,78);
    cout<<r.area()<<"\n";
    cout<<r.primeter()<<"\n";
    cout<<r.isSquare()<<"\n";
    return 0;


}

  rectangle::rectangle(int l=1,int b=1){//parameterised constructor
        setLen(l);
        setBri(b);
    }
    rectangle::rectangle(rectangle(&rec)){//copy constructor
        setLen(rec.len);
        setBri(rec.bri);
    }

        void rectangle::setLen(int l){//setting the len and bri, private variable using member of calss
            if(l>0){
                this->len=l;//this pointer refers the current object of the class
            }
            else{
                this->len=1;
                LenError();
            }
        }  
        void rectangle::setBri(int b){
              if(b>0){
                this->bri=b;
            }
            else{
                this->bri=1;
                BriError();
                
            }
        }
        void rectangle::LenError(){
            cout<<"Invalid value of length so length will be assigned to 1"<<"\n";

        }
        void rectangle::BriError(){
            cout<<"Invalid value of breath so breath will be assigned to 1"<<"\n";

        }
        int rectangle::getlen(){
            return len;
        } 
        int rectangle::getbri(){
            return bri;
        } 
        int rectangle::area(){
            return len*bri;
        }
        int rectangle::primeter(){
            return 2*(len+bri);
        }
        bool rectangle::isSquare(){
            if(len==bri){
                return true;
            }
            return false;
        }
        rectangle::~rectangle(){
            cout<<"Rectangle destroyer"<<"\n";

        }
    
