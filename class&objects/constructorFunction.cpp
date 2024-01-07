#include <iostream>
using namespace std;
class rectangle
{
private:
int len,bri;
    
public:
//types of constructor
//there are two types of constructor
//1 Compiler defined constructor  -this constructor provides some garbage value to the len and breath

//2 user defined constructor
//there are three types of user defined constructor
//1 Non Parameterised 
//2 parameterised constructor
// Copy constructor

   
    rectangle(int l=1,int b=1){//parameterised constructor
        setLen(l);
        setBri(b);
    }
    rectangle(rectangle(&rec)){//copy constructor
        setLen(rec.len);
        setBri(rec.bri);
    }

  void setLen(int l){//setting the len and bri, private variable using member of calss
            if(l>=0){
                len=l;
            }
            else{
                len=1;
                LenError();
            }
        }  
        void setBri(int b){
              if(b>=0){
                bri=b;
            }
            else{
                bri=1;
                BriError();
                
            }
        }
        void LenError(){
            cout<<"Invalid value of length so length will be assigned to 0";

        }
        void BriError(){
            cout<<"Invalid value of breath so breath will be assigned to 0";

        }
        int getlen(){
            return len;
        } 
        int getbri(){
            return bri;
        } 
        int area(){
            return len*bri;
        }
        int primeter(){
            return 2*(len+bri);
        }
    
};


int main(){
    rectangle r1;// object of non parameterised constructor
    rectangle r3(34,56); //object for parameterised constructor
    rectangle r4(r3); //object for copy constructure


    cout<<r1.area()<<"\n";
    cout<<r3.area()<<"\n";
    cout<<r4.area();



    return 0;
}